#include <iostream>
#include "node.h"

using namespace std;

node* search(node* root, int k) {
  if (root == NULL)
    return NULL;
  if (root->value > k)
    return NULL;
  else if (root->value == k) {
    return root;
  } else if (root->value < k) {
    if (root->right && root->right->value < k)
      return search(root->right, k);
    else 
      return search(root->left, k);
  }
}
