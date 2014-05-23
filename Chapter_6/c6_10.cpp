#include <iostream>
#include <vector>

void permute(vector<int> &A, vector<int> P){
  for (int i = 0; i < A.size(); i++) {
    if (P[i] < 0)
      continue;
    int tmp = A[i];
    int next = P[i];
    while(next != i){
      int tmp_next = A[next];
      A[next] = tmp;
      P[next] = - P[next];
      next = P[next];
      tmp = next_tmp;
    }
    A[i] = tmp;
    P[i] = -P[i];
  }
}
