#include <iostream>
#include <vector>

using namespace std;

// A variant of merge sort.

int count_inversion(vector<int>& v, int low, int high) {
  if (low >= high) {
    return 0;
  }
  int mid = low + (high - low)/2;
  int lc = count_inversion(v, low, mid);
  int rc = count_inversion(v, mid+1, high);
  vector<int> tmp(v.size());
  int i = low, int j = mid+1, index = low, ret = lc + rc;
  while (i <= mid && j <= high) {
    if (v[i] <= v[j]) {
      tmp[index++] = v[i++];
    } else {
      ret += mid+1 - i;
      tmp[index++] = v[j++];
    }
  }
  for (int i = low; i <= high; i++) {
    v[i] = tmp[i];
  }
}
