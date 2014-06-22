#include <iostream>
#include "node.h"

using namespace std;

node* LtoBST(Lnode* &r, int l, int h) {
  if (l > h) {
    return NULL;
  }
  int m = l + (h-l)/2;
  node* l = LtoBST(r, l, m - 1);
  node* root = new node(r->value);
  root->left = l;
  r = r->next;
  root->right = LtoBST(r, m+1, h);
  return root;
}

int getL(node* r) {
  if (r == NULL)
    return 0;
  return 1 + getL(r->next);
}

node* getBST(Lnode* r) {
  int n = getL(r);
  return LtoBST(r, 0 , n - 1);
}
