#include <iostream>
#include <vector>

#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;

//directed graph
bool dfs(vector<vector<int> >& v, vector<int>& b, int i) {
  b[i] = GRAY;
  for (int j = 0; j < v.size(); j++) {
    if (!v[i][j]) {
      continue;
    }
    if (b[j] == WHITE) {
      bool reg = dfs(v, b, j);
      if (reg)
	return true;  
    } else if (b[j] == GRAY) {
      return true;
    }
    b[i] = BLACK;
    return false;
  }
}

//undirected graph
bool dfs(vector<vector<int> >& v, vector<int>& b, int i, int parent) {
	  b[i] = 1;
	  for (int j = 0; j < v.size(); j++) {
 	     if (!v[i][j]) {
	       continue;
	     }
	     if (b[j] == 0) {
	       bool reg = dfs(v, b, j, i);
	       if (reg)
	return true;
	     } else if (b[j] == 1 && j != parent) {
	       return true;	
	     }
	   return false;
	  }
}

bool checkConnecty(vector<int> b) {
  for (int i = 0; i < b.size(); i++) {
    if (b[i] == WHITE)
      return false;
  }
  return true;
}
bool twoE(vector<vector<int> > v) {
  vector<int> b(v.size(), 0);
  bool ret = dfs(v, b, 0);
  ret &= checkConnecty(b);
  return ret;
}

/////////////////////////////////////////////////////////////////////////////////////////////
int time = 0;
bool dfs(vector<vector<int> > v, vector<int> d, vector<int> l, int i, int parent) {
  l[i] = d[i] = time++;
  for (int j = 0; j < v.size(); j++) {
    if (j == paretn || v[i][j] == -1)
      continue;
    if (d[j]) {
      l[i] = min(l[i], l[j]);
    } else if(!dfs(v, d, l, j, i)) {
      return false;
    }    
    l[i] = min(l[i], l[j]);
  }
  return parent == -1 || l[i] < d[i];
}

bool is_graph_2(vector<vector<int> > v) {
  vector<int> d(v.size(), -1);
  vector<int> l(v.size(), -1);
  return dfs(v, d, l, 0, -1);
}
