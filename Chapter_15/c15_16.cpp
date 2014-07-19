#include <iostream>
#include <vector>

using namespace std;

int ways(vector<vector<int> > v, int n, int m) {
  vector<vector<int> > dp(n, vector<int> (m, 0));
  for (int i = 0; i < n; i++) {
    dp[n][0] = 1;
  }
  for (int i = 0; i < m; i++) {
    dp[0][m] = 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] != 0) {
        dp[i][j] = 0;
      } else {
        dp[i][j] = dp[i-1][j] + dp[i][j-1];
      }
    }
  }
}
