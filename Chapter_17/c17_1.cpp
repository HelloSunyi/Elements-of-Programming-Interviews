#include <iostream>
#include <vector>

using namespace std;

int ties_election(const vector<int>& v) {
  int total = accumulate(v.begin(), v.end(), 0);
  if (total & 1) {
    return -1;
  }
  vector<vector<int> > dp(v.size()+1, vector<int>(total/2+1, 0));
  dp[0][0] = 1;
  for (int i = 1; i <= v.size(); i++) {
    for (int j = 1; j < total/2+1; j++) {
      dp[i][j] = dp[i-1][j] + (j >= v[i-1]) ? d[i-1][j-v[i-1]] : 0;
    }
  }
  return dp[v.size()][total/2];
}
