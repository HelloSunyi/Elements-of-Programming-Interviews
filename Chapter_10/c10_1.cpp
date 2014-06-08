#include <iostream>
#include <priority_queue>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> lhs, pair<int, int> rhs) {
  return lhs.first > rhs.first;
}

vector<int> merge_arrays(vector<vector<int> > s) {
  priority_queue<pair<int, int>, vector<pair<int, int>, compare> min_heap;
  vector<int> index(s.size());
  vector<int> ret;
  for (int i = 0; i < s.size(); i++) {
    min_heap.push(s[i][0], i);
    index[i] = 1;
  }

  while (!min_heap.empty()) {
    pair<int, int> p = min_heap.top();
    min_heap.pop();
    if (index[p.second] < s[p.second].size()) {
      min_heap.push(pair<s[p.second][index[p.second]++], p->second>);
    }
    ret.push(p->first);
  }
  return ret;
}
