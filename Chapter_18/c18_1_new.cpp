#include <pthread.h>
#include <iostream>

using namespace std;

// The first solutino we could use sempohare to implement, however, the drawback is threads are blocked.
// Second solution is used busy-wating(lock free): atomicCAS()

bool flag;
void* even_thread(void* num) {
  for (int i = 1; i < 100; i+=2) {
    while(atomicCAS(&flag, false, true) != false);
    printf("%d\n", i);
  }
}

void* odd_thread(void* num) {
  for (int i = 0; i < 100; i+=2) {
    while(atomicCAS(&flag, true, false) != true);
    printf("%d\n", i);
  }
}

main() {
  pthread_t t1, t2;
  flag = true;
  pthread_create(&t1, NULL, even_thread, NULL);
  pthread_create(&t2, NULL, odd_thread, NULL);
}

