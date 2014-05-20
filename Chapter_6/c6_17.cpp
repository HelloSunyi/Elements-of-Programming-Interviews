#include <iostream>
#include <vector>

vector<vector<int> > rotate(const vector<vector<int> > &A){
  for(int i = 0; i < A.size() / 2; i++){
    for(int j = 0; j < A.size() - i - 1; j++){
      tmp = A[i][j];
      A[i][j] = A[A.size() -1 - j][i];
      A[A.size() -1 - j][i] = A[A.size() -1 - i][A.size() -1 - j];
      A[A.size() -1 - i][A.size() - j] = A[j][A.size() -1 - i];
      A[j][A.size() -1 - i] = tmp; 
    }
  }
  return A;
}
