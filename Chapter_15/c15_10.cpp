#include <iostream>
#include <vector>

using namespace std;

// Use dp to solve this problem. It is easy that using repeated items. For case only using uniq item, after DP checking potential words, need to verity it, use dfs.
bool search(vector<int> v, vector<vector<int> > t) {
  int dp[v.size()+1][t.size()][t[0].size()];
  for (int i = 0; i < t.size(); i++) {
    for (int j = 0; j < t[0].size() j++) {
      dp[0][i][j] = true;
    }
  }
  for (int i = 1; i <= v.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      for (int k = 0; k < t[0].size(); k++) {
        if (t[j][k] == v[i] && (dp[i-1][j-1][k] || dp[i-1][j][k-1] || dp[i-1][j+1][k] || dp[i-1][j][k+1] || dp[i-1][j][k])) {
	  dp[i][j][k] = true;
	}
      }
    }
  }
  // search for dp[v.size()][i][j] == true
}

