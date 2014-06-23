#include <iostream>
#include "node.h"

using namespace std;

node* build_bst(vector<int> v, int l, int h) {
  if (l > h) {
    return NULL;
  }
  node* r = new node(v[l]);
  int index = l + 1;
  for (; index <= h; index++) {
    if (v[index] > v[l])
      break;
  }
  r->left = build_bst(v, l+1, index);
  r->right = build_bst(v, index+1, h);
  return r;
}

// O(n) time complextiy to implement the algorithm. 
node* build_bst(vector<int> v, int& index, int& min, int& max) {
  if (index == v.size()) {
    return NULL；
  }
  if (v[index] < min && v[index] > max) {
    return NULL;
  }
  node* r = new node(v[index]);
  index++;
  r->left = build_bst(v, index, min, cur);
  r->right = build_bst(v, index, cur, max);
  return r;
}
