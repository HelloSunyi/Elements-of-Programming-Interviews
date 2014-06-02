#include <iostream>
#include <stack>

using namespace std;

// Use two stack to implement the queue, and the stack supports max() operation.

stack<int> s1;
stack<int> s2;

void enqueue(int a) {
  s1.push(a);
}

int dequeue() {
  if (s2.empty()) {
    while (!s1.empty()) {
      s2.push(s1.top());
      s1.pop();
    }
  }
  if (!s2.empty()) {
    int ret = s2.top();
    s2.pop();
    return ret;
  }
  cout << "The queue is empty!" <<endl;
  return -1;
}

int max() {
  if (!s1.empty) {
    return (s2.emtpy()) s1.max() : max(s1.max(), s2.max());
  } else {
    if (!s2.empty())
    return s2.max();
  }
  cout << "The queue is empty!" << endl;
}
