#include <iostream>
#include <vector>
#include <algorithm>

vector<int> deduplication(vector<int> V) {
  sort(V.begin(), V.end());
  vector<int> ret;
  ret.push_back(V[0]);
  for (int i = 1; i < V.size(); i++) {
    if (V[i] != ret.back())
      ret.push_back(V[i]);
  }
  return ret;
}
