#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool find_2_sum(vector<int> A, int t) {
  int low = 0;
  int high = A.size() - 1;
  while (low <= high) {
    if (A[low]+A[high] == t)
      return true;
    else if(A[low]+A[high] > t)
      high--;
    else
      low++;
  }
  return false;
}

bool find_3_sum(vector<int> A, int t) {
  sort(A.begin(), A.end());
  for (int i = 0; i < A.size(); i++) {
    if (find_2_sum(A, t - A[i])
      return true;
  }
  return false;
}
