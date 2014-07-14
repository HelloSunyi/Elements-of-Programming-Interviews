#include <iostream>
#include <vector>

using namespace std;

// Recursion + memorization

int min_distance(vector<vector<int> > dis, vector<vector<int> > delay, int u, int t, int cons) {
  vector<vector<int> > dp(dis.size(), vector<int> (cons, INT_MAX));
  for (int i = 0; i < con; i++) {
    dp[t][i] = 0;
  }
  return helper(dp, dis, delay, u, cons);
}

int helper(vector<vector<int> > &dp, vector<vector<int> > dis, vector<vector<int> > delay, int u, int cons) {
  if (cons < 0) {
    return INT_MAX;
  }
  if (dp[u][cons] != INT_MAX) {
    return dp[u][cons];
  }
  for (int i = 0; i < dis.size(); i++) {
    if (dis[u][i] != -1) {
      dp[u][cons] = min(dp[u][cons], dis[u][i] + helper(dp, dis, delay, i, cons - delay[u][i]));
    }
  }
  return dp[u][cons];
}
