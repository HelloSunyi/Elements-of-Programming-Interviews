#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int> > v, vector<int> flag, int i, int value, vector<int>& res) {
  flag[i] = value;
  for (int j = 0; j < v.size(); j++) {
    if (v[i][j] == -1)
      continue;
    if (flag[j] != value) {
      res.push_back(j);
      dfs(v, flag, j, value, res);
    }   
  }
}

void findExtention(vector<vector<int> > v) {
  vector<int> res;
  vector<int> flag(v.size(), -1);
  for (int i = 0; i < v.size(); i++) {
    dfs(v, flag, i, i, res);
  }
}
