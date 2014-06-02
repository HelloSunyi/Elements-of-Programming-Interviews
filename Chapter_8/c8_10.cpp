#include <iostream>
#include <vector>

using namespace std;

#define N 1024
int cap = N;
int size = 0;
int head = 0;
int tail = 0;
vector<int> res;

void enqueue(int a) {
 if (size == cap)
   cout << "The queue is full!" << endl;
 res[tail] = a;
 tail = (tail + 1) % cap;
 size++;
}

int dequeue() {
  if (size == 0)
    cout << "The queue is empty!" << endl;
  int t = res[head]; 
  head = (head + 1) % cap;
  size--;
  return t; 
}
