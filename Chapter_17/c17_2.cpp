#include <iostream>
#include <vector>

int knapsack(int w, vector<int> v, vector<int> w) {
  vector<vector<int> > dp(v.size() + 1, w + 1);
  dp[0][0] = 0;
  for (int i = 1; i <= v.size(); i++)
    for (int j = 1; j  <= w; j++) {
      dp[i][j] = max(dp[i-1][j], (j >= w[i-1]) ? dp[i-1][j-w[i-1]]+v[i-1] : 0);
    }  
  return dp[v.size()][w];
}
