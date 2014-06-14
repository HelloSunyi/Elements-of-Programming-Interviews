#include <iostream>
#include <vector>

using namespace std;

// Use the selection algorithm, for each two k elements, store the k largest ones and discard the smaller ones.
vector<int> search_k_largest(const vector<int>& V, int k) {
  vector<int> ret(2 * k);
  int index = 0;
  for(; index < k, index++) {
    ret[index] = V[index];
  }
  while (index < V.size()) {
    int i = 0;
    while (index < V.size() && i < k) {
      ret[i++] = V[index++];
    }
    selection(ret, 0, i + k, k);
  }
  return ret.
}
