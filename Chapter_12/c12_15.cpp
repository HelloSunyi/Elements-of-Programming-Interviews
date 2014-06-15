#include <iostream>
#include <vector>
#include <hash_map>

using namespace std;

int find_smallest_covering_subset(vector<string> A, vector<string> Q) {
  hash_map<string, int> hash;
  for (int i = 0; i  < Q.size(); i++) {
    hash[Q[i]] = i;
  }
  vector<int> L(Q.size(), -1);
  vector<int> D(Q.size(), INT_MAX);
  int dis = INT_MAX;
  for (int i = 0; i < A.size(); i++) {
    auto it = hash.find(A[i]);
    if (it != hash.end()) {
      if (it->second == 0) {
        D[0] = 1;
      } else if (D[it->second - 1] != INT_MAX) {
        D[it->second] = D[it->second - 1] + i - L[it->second - 1];
      }
      L[it->second] = i;
      if (it->second == Q.size() - 1 && D[it->second] < dis)
	dis = D[it->second];
    }
  }
  return dis;
}
