#include <iostream>
#include <pthread>

#define SIZE 4
using namespace std;

sem_t cons;
sem_t prod;
int* store;
int cindex = 0;
int pindex = 0;

void init() {
  sem_init(&prod, NULL, SIZE);
  sem_init(&cons, NULL, 0);
  store = (int*) malloc(sizeof(int) * 10);
}

void* put(void* v) {
  sem_wait(&prod);
  store[pindex] = 0;
  pindex = (pindex+1) % 10;
  sem_post(&cons);
}

void* get(void* v) {
  sem_wait(&cons);
  cout << store[cindex] << endls;
  cindex = (cindex+1) % 10;
  sem_post(&prod);
}
