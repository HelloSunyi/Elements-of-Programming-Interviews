#include <iostream>
#include "node.h"

using namespace std;

void rec(node* root, int k, node* &first) {
  if (root == NULL)
    return;
  if (root->value == k) {
    first  = root;
    rec(root->left, k, first);
  } else if (root->value > k) {
    rec(root->left, k, first);
  } else {
    rec(root->right, k, first);
  }
}

node* ite(node* root, int k) {
  node* cur = root;
  node* first = NULL;
  while (cur) {
    if (cur->value == k) {
      first = cur;
      cur = cur->left;
    } else if (cur->value > K) {
      cur = cur->left;
    } else {
      cur = cur->right;
    }
  }
  return right;
}
