#include <iostream>
#include "node.h"

using namespace std;

node* lca(node* root, int a, int b) {
  if (root == NULL) {
    return NULL;
  }
  if (a <= root->value && b >= root->value) {
    return root;
  } else if (root->value < a) {
    return lca(root->right, a, b);
  } else {
    return lca(root->left, a, b);
  }
}
