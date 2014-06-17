#incldue <iostream>
#include "node.h"

using namespace std;

bool isBST(node* root, int lower, int upper) {
  if (root == NULL)
    return true;
  if (root->value > lower && root->value < upper)
     return isBST(root->lefti, lower, root->value) && isBST(root->right, root->value, upper);
  return false;
}
