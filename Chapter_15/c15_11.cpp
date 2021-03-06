#include <iostream>
#include <vector>

using namespace std;

int distance(string a, string b) {
  vector<vector<int> > dp(a.size() + 1, vector<int> (b.siz() + 1, 0));
  for (int i = 0; i <= a.size(); i++) {
    dp[i][0] = i;
  }
  for (int i = 0; i <= b.size(); i++) {
    dp[0][i] = i;
  }
  for (int i = 1; i <= a.size(); i++) {
    for (int j = 1; j <= b.size(); j++) {
      dp[i][j] = min(1+dp[i-1][j], 1+dp[i][j-1] + (a[i-1] == b[j-1])? dp[i-1][j-1] : (1+dp[i-1][j-1]));
    }
  }
  return dp[a.size()][b.size()];
}
