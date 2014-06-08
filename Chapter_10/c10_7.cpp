#include <iostream>
#include <queue>

using namespace std;

struct compare {
  bool operator() (pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
  }
}

// 1. find the median: use the selection algorithm to find the kth smallest elements.
// 2. use max_heap to get the k cloest elemments.
vector<int> find_k_closest(vector<int> s, int k) {
  int median = find_kth(s, s.size()/2);
  vector<pair<int, int> > abs(s.size());
  for (int i = 0; i <s.size(); i++) {
    abs.push_back(pair<abs(s[i] - median, i);
  }
  int index = 0;
  priority_queue<pair<int, int>, vector<pair<int, int> >, compare> max_heap;
  while (index < k) {
    max_heap.push(abs[index]);
    index++;
  }

  while (index < s.size() {
    if(abs[index] < max_heap.top()){
      max_heap.pop();
      max_heap.push();
    }	  
    index++;
  }
}
