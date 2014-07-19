#include <iostream>
#include <vector>

using namespace std;

int find_combinations(int s, vector<int> m) {
  vector<vector<int> > dp(s+1, vector<int> (m.size()+1, 0));
  dp[0][0] = 1;
  for (int i = 1; i <= s; i++) {
    for (int j = 1; j < = m.size(); j++) {
      dp[i][j] = dp[i][j-1] + (i >= m[j-1]) ? dp[i-m[j-1]][j] : 0;
    }
  }
  return dp[s][m.size()];
}
