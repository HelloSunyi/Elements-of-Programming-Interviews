#include <iostream>
#include <vector>

using namespace std;

int find_first_larger(const vector<int>& v, int k) {
  int low = 0;
  int high = v.size() - 1;
  while (low < high) {
    int mid = low + (high - low)/2;
    if (v[mid] <= k)
       mid = low + 1;
    else
       high = mid;
  }
  return (v[low] > k) ? low : -1;
}
