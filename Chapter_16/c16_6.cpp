#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int> v, vector<int>& group, int i, int id) {
  group[i] = id;
  for (int j = 0; j < v.size(); j++) {
    if (group[j] == -1) {
      dfs(v, group, j, id);
    }
  }
}

bool search(vector<vector<int> > v, vector<pair<int, int> > p) {
  vector<int> group(v.size(), -1);
  int id = 0;
  for (int i = 0; i < v.size(); i++) {
    if (group[i] == -1) {
      dfs(v, group, i, id++);
    }
  }
  for (int i = 0; i < p.size(); i++) {
    if (group[p.first()] != -1 && group[p.second()] != -1 && group[p.first()] == group[p.second]) {
      return false;
    }
  }
  return true;
}
