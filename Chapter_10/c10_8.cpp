#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int median(vector<int> s) {
  priority_queue<int, vector<int>, greater<int> > min_heap;
  priority_queue<int, vector<int>, less<int> > max_heap;
  int index = 0;
  while (index < s.size()) {
    if (s[index] > max_heap.top()) {
      min_heap.push(s[index]);
    } else {
      max_heap.push(s[index]);
    }
    if (max_heap.size() > min_heap.size() + 1) {
      min_heap.push(max_heap.top());
      max_heap.pop();
    }
    if (min_heap.size() > max_heap.size() + 1) {
      max_heap.push(min_heap.top());
      min_heap.pop();
    }
  }
  return (max_heap.top() + min_heap.top()) / 2;
}
