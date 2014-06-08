#include <iostream>
#include <queue>

using namespace std;

// 1. Divide array into k sorted arrays
vector<vector<int> > divide(vector<int> A, int k) {
  vector<vector<int> ret(k, vector<int>);
  int index = 0;
  ret[0].push(A[0]);
  int is_increasing = 0;
  for (int i = 1; i< A.size(); i++) {
    if (A[i] > A[i -1] && !is_increasing || A[i] < A[i-1] && is_increasing) {
      index++;
      is_increaseing = !is_increasing;
    }
    ret[index].push(A[i]);
  }
  return ret;
}

// 2. Use solution in c10_1.cpp
