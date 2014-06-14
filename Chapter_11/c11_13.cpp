#include <iostream>
#include <vector>

using namespace std;

void partition(vector<int> &V, int low, int high, int k) {
  int m = low;
  int pivot = V[0];
  for (int i = low; i < high; i++) {
    if (V[i] > pivot) {
      swap(V[i], V[++m]);
    }
  }
  swap(V[m], V[0]);
  if (m == k - 1)
    return;
  else if (m > k - 1)
    return partition(V, low, m-1, k);
  else
    return partition(V, m + 1, high, k - m - 1);  
}

vector<int> selection(vector<int> v, int k) {
  partition(v, 0, v.size() - 1, k);
  return v;
}
