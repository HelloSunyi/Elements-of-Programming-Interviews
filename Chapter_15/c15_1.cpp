#include <iostream>
#include <vector>

#define BLACK 1
#define WHITE 0

using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
bool helper(vector<vector<int> > v, vector<vector<bool> > &flag, int i, int j, int ei, int ej) {
  if (i< 0 || i > v.size() || j < 0 || j > v[0].size() || flag[i][j] == true || v[i][j] = BLACK) {
    return false;
  }
  if (i == ei && j == ej) {
    return true;
  }
  flag[i][j] = true;
  for (int di = 0; di < 4; di++) {
    bool ret = helper(v, flag, i + dx[di], j + dy[di], ei, ej);
    if (ret)
      return true;
  }
  return false;
}
bool searchPath(vector<vector<int> > v, int si, int sj, int ei, int ej) {
  vector<vector<bool> > flag(v.size(), vector<bool>(v[0].size(), flase);
  return helper(v, flag, si, sj, ei, ej);
}
