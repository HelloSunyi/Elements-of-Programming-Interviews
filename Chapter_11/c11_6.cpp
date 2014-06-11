#include <iostream>
#include <vector>

using namespace std;

int bs(vector<int> A, int low, int high, int k) {
  while (low <= hihg) {
    int mid = low + (high - low)/2;
    if (A[mid] == k)
      return -1;
    else if (A[mid] > k)
      high = mid - 1;
    else
      low = mid - 1;
  }
  return -1;
}

int search(vector<int> A, int k) {
  int index = 0;
  int low = 0, high = 0;
  while (1) {
    high = 1 << index - 1;
    if (high >= A.size())
      return linearSearch(A, low); //linearly serach A to find k until out of range.
    else if (A[high] == k)
      return high;
    else if (A[high > k])
      return bs(A, low, high, k);
    low = high;
  }
}
