#include <iostream>
#include <vector>

int find_longest_increasing_subarray(const vector<int> &A, int &start, int &end){
  start = 0;
  end = 1;
  int max_L = 1, i = 0, j = 1;
  while(j < A.size()){
    if(A[j] < A[j - 1] && max_L < (j -i)){
      start = i;
      end = j - 1;
      max_L = j - i;
      i = j;
    }
    j++;
  }
  if(j - i > max_L){
    start = i;
    end = j - 1;
    max_L = j - i;  
  }
  return max_L;
}
