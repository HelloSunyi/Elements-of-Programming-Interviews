#include <iostream>
#include <stack>

using namespace std;

stack<int> s1;
stack<int> s2;

void push(int a) {
  s1.push(a);
}

int pop() {
  if (s2.empty()) {
    while (!s1.empty()) {
      s2.push(s1.top());
      s1.pop();
    }
  }
  if (s2.empty())
    return -1;
  int ret = s2.top();
  s2.pop();
  return ret;
}

