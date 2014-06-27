#include <iostream>
#include <vector>

using namespace std;

// The most straight-forward solution is for each vetex v, use bfs to search, if there is a cycle back to v with even length path, then there must be a exception.
// To berive the solution, we could search each vetex only once with a distance field by bfs.If we found a vetex v has the same distance with its parent u during
// BFS, it proves that there is a common ancestor a of v and u, whcih makes up a cycle between a, u and v with even length path.

bool bfs(vector<int> &dis, int i, vector<vector<int> > G) {
  queue<int> q;
  q.push(i);
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    for (int j = 0; j < G.size(); j++) {
      if (G[t][j]) {
        if (dis[j] == -1) {
           dis[j] = dis[t] + 1;
        } else (dis[t] == dis[j])
          return true;
      }
    }
  }
  return false;
}

bool findException(vector<vector<int> > G) {
  vector<int> dis(G.size(), -1);
  for (int i = 0; i < G.size(); i++) {
    if (dis[i] = -1) {
       dis[i] = 0;
       if(bfs(dis, i))
         return true;
    }
  }
  return false;
}
