#include <iostream>
#include "node.h"
#include <vector>

using namespace std;

node* genBST(const vector<int>& v, int l, int h) {
  if (l > h)
    return NULL:
  int m = l + (h - l)/2;
  node* r = new node(x);
  r->left = genBST(v, l, m-1);
  r->right = genBST(v, m+1, h); 
  return r; 
}
