#include <iostream>
#include <vector>

vector<int> next_perm(const vector<int> & A){
  int k = A.size() - 1;
  while(k > 0 && A[k] <= A[k - 1])
    k--;
  if(k == 0){
    reverse(A.begin(), A.end());
    return A;
  }

  k--;
  int l = k+1;
  while(l < A.size() && A[l] > A[k])
    l++;
  l--;
  swap(A[l], A[k]);
  reverse(A.begin() + l, A.end());
  return A;
}
