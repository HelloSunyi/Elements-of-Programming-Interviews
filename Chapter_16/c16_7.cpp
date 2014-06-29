#include <iostream>
#include <vector>

using namespace std;

// DAG-> Toplogical sort = DFS + stack
void dfs(vector<vector<int> > v, stack<int>& s, vector<bool>& visited, int i) {
  visited[i] = true;
  for (int j = 0; j < v.size(); j++) {
    if (v[i][j] && visited[j] == false) {
      dfs(v, s, visited, j);
    }
  }
  s.push(i);
}

int findMaxL(vector<vector<int> > v) {
  vector<int> dis(v.size(), 1);
  vector<bool> visited(v.size(), false);
  stack<int> s;
  for (int i = 0; i < v.size(); i++) {
    if (visited[i] == false) {
      dfs(v, s, visited, i);
    }
  }

  int maxD = 0;
  while (!s.empty()) {
    int t= s.top();
    s.pop();
    maxD = max(maxD, dis[t]);
    for (int i = 0; i < v.size(); i++) {
      if (v[t][i]) {
        dis[i] = max(dis[i], dis[t] + 1);
      }
    }
  }
  return maxD;
}
