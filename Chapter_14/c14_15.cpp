#include <iostream>
#include "node.h"

using namespace std;

struct node {
  int idx;
  int value;
  node(int i, int v):idx(i), value(v){}
};

struct cmp {
  bool operator()(node* rhs, node* lhs) {
    return rhs.value > lhs.value;
  }
};

int find_min_distance(vector<vector<int> > v) {
  vector<int> index(v.size(), 0);
  tree* bst = new tree();
  for (int i = 0; i < v.size(); i++) {
    node* tmp= new node(i, v[i][0]);
    bst.add(tmp);
  }
  int dis = INT_MAX;
  while (true) {
    dis = min(dis, bst.max()->value - bst.min()->value);
    node* t = bst.min();
    bst.erase(t);
    if (++index[t->idx] >= v[t->indx].size()) {
      return dis;
    }
    node* tmp = new node(t->idx, v[t->idx][index[t->idx]]);
    bst.add(tmp);
  }
}
