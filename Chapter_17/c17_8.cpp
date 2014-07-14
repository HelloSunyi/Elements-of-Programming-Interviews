#include <iostream>
#include <vector>

using namespace std;

bool solver(vector<vector<int> >& a, int index) {
  if ( a == 81) {
    return true;
  }
  int i = index/9;
  int j = inde%9;
  for (int int k = 0; k < 9; k++) {
    if (check_validence(i, j, k)) {
      a[i][j] = k;
      if (solver(a, index+1)) {
        return ture;
      }
      a[i][j] = -1;
    }
  }
  return false;
}
