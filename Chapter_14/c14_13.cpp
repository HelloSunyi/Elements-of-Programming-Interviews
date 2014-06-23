#include <iostream>
#include "node.h"

using namespace std;

// Two cases:
// 1. r is ancestor and s is the right child.
// 2. r is left child and s is the ancestor.
node* case1(node* root, int r, int m, bool &f) {
  if (root == NULL) {
    return NULL;
  } else if (root->value > r && root < m) {
    f = true;
    return case1(root->right, r, m, f);
  } else if (root->value < r){
    return case1(root->right, r, m, f);
  } else {
    return NULL;
  }
}
