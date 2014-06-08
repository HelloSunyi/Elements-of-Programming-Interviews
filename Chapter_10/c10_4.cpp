#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct compare {
  bool operator()(const int a, const int b) {
    return a < b;
  }
};

vector<int> find_k_neareast_starts(const vector<int> &s, int k) {
  priority_queue<int, vector<int>, compare> max_heap;
  int index = 0;
  while (index++ < k) {
    max_heap.push(s[index]);
  }

  while (index < s.size()) {
    if (s[index] < max_heap.top()) {
      max_heap.pop();
      max_heap.push(s[index]);
    }
  }

  vector<int> ret;
  while (!max_heap.empty()) {
    ret.push_back(max_heap.top());
    max_heap.pop();
  }

  return ret;
} 
