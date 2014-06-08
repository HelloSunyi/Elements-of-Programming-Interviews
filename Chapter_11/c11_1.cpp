#include <iostream>
#include "node.h"

using namespace std;

int find_first_k(const vector<int>& v, int k) {
  int low = 0;
  int high = v.size() - 1;
  int mid;
  while (low < high) {
    mid = low + (high - low) / 2;
    if (v[mid] >= k)
      high = mid;
    else
      low = mid + 1;
  }
  return (v[mid] == k)? mid : -1;
}
