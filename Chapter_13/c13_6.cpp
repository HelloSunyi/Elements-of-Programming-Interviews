#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool queue_order(vector<int> A, vector<int> B) {
  if (A.size() != B.size())
    return false;
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  for (int i = 0; i < A.size(); i++) {
    if (A[i] < B[i])
       return false;
  }
  return true;
}
