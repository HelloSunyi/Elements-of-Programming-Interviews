#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> v) {
  int low = 0;
  int high = v.size() - 1;
  while (low <= high) {
    int mid = low + (high - low)/2;
    if (v[mid] == mid)
      return mid;
    else if (v[mid] > mid)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}
