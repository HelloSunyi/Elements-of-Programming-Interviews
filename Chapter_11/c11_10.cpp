#include <iostream>
#include <vector>

using namespace std;

int search_2D(vector<vector<int> > A, int x) {
  int n = A.size();
  int m = A[0].size();
  int i = 0;
  int j = m - 1;
  while ( j >= 0 && i < n) {
    if (A[i][j] < x)
       i++;
    else if (A[i][j] == x) {
      return 1;
    } else
      j--;
  }
  return 0;
}
