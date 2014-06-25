#include <iostream>
#include "node.h"

using namespace std;

// Sort accoring to the height, and build up a BST using height as key.

struct point {
  int lp;
  int rp;
  int h;
  point(int l, int r, int t): lp(l), rp(r), h(t) {}
};

struct node {
  point p;
  node* left;
  node* right;
  node(point t):p(t) {}
};

struct cmp{
  bool operator()(point lhs, point rhs) {
    return lhs.h > rhs.h;
  }
};

void insert(node* root, point t) {
  if (root->p.lp < t.lp && root->p.rp > t.rp) {
    return;
  }
  if (root->p.lp > t.lp) {
    if (root->left == NULL) {
      root->left = new node(point(t.lp, root->p.lp, t.h));
    } else {
      insert(root->left, point(t.lp, root->p.lp, t.h));
    }
  }
  if (root->p.rp < t.rp) {
    if (root->right == NULL) {
      root->right = new node(point(root->p.rp, t.rp, t.h));
    } else {
      insert(root->right, point(root->p.rp, t.rp, t.h));
    }
  }
}

void skyline (vector<point> v) {
  sort(v.begin(), v.end(), cmp);
  node* root = new node(v[0]);
  for ( int i = 1; i < v.size(); i++) {
    insert(root, v[i]);
  }
}
