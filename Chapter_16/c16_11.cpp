#include <iostream>
#include <vector>

using namespace std;

void floyd(vector<vector<int> >& g) {
  for (int k = 0; k < g.size(); k++) {
    for (int i = 0; i < g.size(); i++) {
      for (int j = 0; j < g.size(); j++) {
        if (g[i][k] != INT_MAX && g[k][j] != INT_MAX && g[i][j] > g[i][k] + g[k][j]) {
	  g[i][j] = g[i][k] + g[k][j];
	}
      }
    }
  }
}

struct section{
  int x;
  int y;
  double dis;
};

double search(vector<vector<int> > g, vector<section> p, int a, int b) {
  floyd(g);
  double dis = g[a][b];
  for (int i = 0; i < p.size(); i++) {
    if (g[a][p.first] != INT_MAX && g[p.second][b] != INT_MAX && dis < g[a][p.first] + g[p.first][p.second] + g[p.second][b]) {
      dis = g[a][p.first] + g[p.first][p.second] + g[p.second][b];
    }
  }
  return dis;
}
