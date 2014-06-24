#include <iostream>
#include "node.h"

using namespace std;

// 1. First find element K that the first one larger than L.
// 2. Find K's successors until its larger than U.
node* find_fir(node* root, int L) {
  if (root == NULL) {
    return NULL;
  } else if (root->value >= L) {
    node* n = find_fir(root->left, L);
    return n ? n : root;
  } else {
    return find_fir(root->right, L);
  }
}

vector<int> search_intervals(node* r, int L, int U) {
  node* k = find_fir(r, L);
  vector<int> res;
  if (k == NULL) {
    return res;
  }
  while (k && k->value < U) {
    res.push_back(k->value);
    k = find_sucssor(k); 
  }
}
