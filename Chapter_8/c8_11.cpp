#include <iostream>
#include <queue>

using namespace std;

unsigned int size = 0;
unsigned int val = 0;
unsigned long long max = (long long)1 << 32 - 1;

void enqueue(int v) {
  if (val*10 + v > max)
    cout << "The queue is full" << endl;
  size++;
  val = val*10 + v;
}

int dequeue() {
  if (size == 0)
    return -1;
  int t = power(10, size - 1);
  int ret = val / t;
  val = val % t;
  size--;
  return ret;
}
