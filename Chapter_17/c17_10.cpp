#include <iostream>
#include <vector>

int computation_times(int n) {
  if (n<=2) {
    return 1;
  }
  vector<int> dp(n+1, INT_MAX);
  dp[1] = 1;
  dp[2] = 1;
  for (int i = 3; i < n; i++) {
    for (int j = 1; j <= i/2; j++) {
      dp[i] = min(dp[i], dp[j] + dp[i-j]);
    }
  }
  return dp[n];
}
