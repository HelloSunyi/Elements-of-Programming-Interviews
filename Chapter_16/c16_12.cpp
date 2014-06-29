#include <iostream>
#include <vector>

using namespace std;

// To find the target, we could transform the conrrency tranfer to a weighted directed graph. w(e) of edge (u,v) is the amount of v we can buy
// with one unit of u. So we need to find a cycle where the multiplication of the edges weight is more than 1: a*b*c*d*a > 1; It is hard to find
// the multiplication in a graph but it is easy to find the sum, so we use lg to convert the fomula: lg(a*b) = lga + lgb; And there is no algorithm
// to find positive cycle sum but a famous algorithm to find negative-weight cycles: Bellman-Ford algorithm.

bool bellman_ford(vector<vector<double> > g, int source) {
  vector<double> dis(g.size(), INT_MAX);
  dis[source] = 0;

  for (int times =2; times < g.size(); times++) {
    bool update = false;
    for (int i = 0; i < g.size(); i++) {
      for (int j = 0; j < g.size(); j++) {
        if (g[i][j] && dis[j] < dis[i] + g[i][j]) {
	  update = true;
	  dis[j] = dis[i] + g[i][j];
	}
      }
    }
  if (!update)
    return false;	  
  }
  for (int i = 0; i < g.size(); i++) {
    for (int j = 0; j < g.size(); j++) {
      if (g[i][j] && dis[j] < dis[i] + g[i][j]) {
        return ture;
      }
    }
  }
  return false;
}

bool isArbitrageExist(vector<vector<double> > g) {
  for (int i = 0; i < g.size(); i++){
    for (int j = 0; j < g.size(); j++) {
      if (g[i][j]) {
        g[i][j] = -lg(g[i][j])
      }
    }
  }
  return bellman_ford(g, 0);
}
