#include <iostream>
#include <vector>

using namespace std;

// c(n, k) = c(n-1, k) + c(n-1, k-1);

int get(int n, int k) {
  vector<vector<int> > dp(n+1, vector<int> (k+1, 0));
  for (int i = 0; i < n+1; i++) {
    dp[i][0] = 1;
  }
  for (int i = 1; i <= k; i++) {
    dp[i][i] = 1;
  }
  for (i = 2; i <= n; i++) {
    for (int j = 1; j < i && j <= k; j++) {
      dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
    }
  }
  return dp[n][k];
}
