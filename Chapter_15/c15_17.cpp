#include <iostream>
#include <vector>

using namespace std;

int ways(vector<vector<int> > v, int n, int m) {
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
     v[i][j] = max(v[i-1][j], v[i][j-1]) + v[i][j];
    }
  }
  return v[n-1][m-1];
}
