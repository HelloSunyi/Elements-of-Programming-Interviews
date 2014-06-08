#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> find_k_smallest(vector<int> s, int k) {
  priority_queue<int, vector<int>, greater<int> > min_heap;
  int index = 0;
  while (index < k) {
    min_heap.push(s[index]);
    k++;
  }
  while (index < s.size()) {
    if (s[index] > min_heap.top()) {
      min_heap.pop();
      min_heap.push(s[index]);
    }
  }
  vector<int> res;
  while (!min_heap.empty()) {
    res.push_back(min_heap.top());
    min_heap.pop();
  }
  return res;
}
