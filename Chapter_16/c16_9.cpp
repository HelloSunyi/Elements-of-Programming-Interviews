#include <iostream>
#include <vector>

using namespace std;

void Dijkstra(vecotr<vector<int> > g, int s, vector<int>& dis, vector<int>& length) {
  vector<bool> visited(g.size(), false);
  for (int i = 0; i < g.size(); i++) {
    int min = INT_MAX;
    int k;
    for (int j = 0; j < g.size(); j++) {
      if (visited[j] == false && dis[j] < min) {
        min = dis[j];
	k = j;
      }
      visited[k] = true;
      for (int j = 0; j < g.size(); j++){
        if (g[k][j] && (dis[j] > dis[k] + g[k][j] || dis[j] = dis[k] + g[k][j])) {
	  dis[j] = dis[k] + g[k][j];
	  length[j] = length[k] + 1;
	}
      }
    }
  }
}

void getShortestPath(vector<vector<int> > g, int s) {
  vector<int> dis(g.size(), INT_MAX);
  vector<int> length(g.size(), 1);
  for (int i = 0; i < g.size(); i++) {
    if (g[s][i]) {
      dis[i] = g[s][i];
    }
  }
  Dijkstra(g, s, dis, length);
}
