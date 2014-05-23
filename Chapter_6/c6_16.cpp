#include <iostream>
#include <vector>
#define COLOR 1
using namespace std;


void dfs(vector<vector<int> > &res, int x, int y) {
  if(x < 0 || x >= res.size() || y < 0 || y >= res[0].size() || res[x][y] == COLOR)
    return;
  res[x][y] = !COLOR;
  int xi[] = {1, -1, 0, 0};
  int yi[] = {0, 0, 1, -1};
  for (int i = 0; i < 4; i++) {
    dfs(res, x + xi[i], y + yi[i]);
  }
}
