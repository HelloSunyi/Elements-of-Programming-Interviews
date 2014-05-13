#include <iostream>
#include <vector>

vector<int> gen_k_num(vector<int> &A, int k){
  for(int i = 0; i < k; i++){
    int index = random(i, A.size()-1);
    swap(A[i], A[index]);
  }
  A.resize(k);
  return A;
}
