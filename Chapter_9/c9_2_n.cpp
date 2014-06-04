#include <iostream>
#include <math>
#include "node"

node* k_balanced(node* root, int& sum, int k) {
  if (root == NULL)
    return NULL;
  int ls = 0, rs = 0;
  node* ln = k_balanced(root->left, ls);
  node* rn = k_balanced(root->right, rs);
  if (ln)
    return ln;
  if (rn)
    return rn;
  sum = ls + rs + 1;
  if (abs(ls - rs) > k)
    return root;
  return NULL;
}
