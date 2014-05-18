#include <iostream>

vector<int> rotate(const vector<int> &A, int k){
  k  = k % A.size();
  reverse(A.begin(), A.end() + k);
  reverse(A.begin() + k + 1, A.end());
  reverse(A.begin(), A.end());
  return A;
}
