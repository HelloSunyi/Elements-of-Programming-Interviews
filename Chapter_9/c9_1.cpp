#include <iostream>
#include <math>
#include "node"

using namespace std;

bool balanced(node* root, int& h) {
  if (root == NULL)
    return true;
  int lh = 0, rh = 0;
  bool lb = balanced(root->left, lh);
  bool rb = balanced(root->right, rh);
  if (!lb || !rb)
    return false;
  if (abs(lh - rh) > 1)
    return false;
  h = max(lh, rh) + 1;
  return true;
}
