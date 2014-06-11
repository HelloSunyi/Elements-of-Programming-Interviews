#include <iostream>
#include <vector>

using namespace std;

int search_in_circular_array(const vector<int>& v) {
  int low = 0;
  int high = v.size() - 1;
  int mid;
  while (low < high) {
    mid = low + (high - low)/2;
    if (A[mid] < A[high])
      high = mid;
    else
      low = mid + 1;
  }
  return l;
}
