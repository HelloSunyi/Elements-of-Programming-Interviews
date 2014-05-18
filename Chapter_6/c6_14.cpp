#include <iostream>
#include <vector>

bool valid_sodoku(const vector<vector<int> > & A){
  if(A.size() != 9 || A[0].size() != 9)
    return false;
  vector<vector<int> > a(9 ,vector<int>(9, 0));
  vector<vector<int> > b(9 ,vector<int>(9, 0));
  vector<vector<int> > c(9 ,vector<int>(9, 0));

  for(int i = 0; i < 9; i++)
    for(int j = 0; j < 9; j++){
      if(a[i][A[i][j]] || b[j][A[i][j]] || c[3 * (i / 3) + j / 3][A[i][j]])
        return false;
      a[i][A[i][j]] = 1;
      b[j][A[i][]j] = 1;
      c[3 * (i / 3) + j / 3][A[i][j]] = 1;
   }
  return true;
}
