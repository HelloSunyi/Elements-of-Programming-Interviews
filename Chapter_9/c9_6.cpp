#include <iostream>
#include "node"

using namespace std;

node* most_left(node* root) {
  if (root->left == NULL)
    return root;
  return most_left(root->left);
}

node* successor(node* root, node* n) {
  if (root == NULL)
    return NULL;
  if (n->right)
    return most_left(n->right);
  else {
    node* pa_n = n->parent;
    while (pa_n && pa_n->left != n) {
      n = pa_n;
      pa_n = pa_n->parent;
    }
    return pa_n;
  }
  return NULL;
}
