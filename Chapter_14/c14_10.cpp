#include <iostream>
#include "node.h"

using namespace std;

void find_k(node* root, int k, vector<node*>& v) {
  if (root == NULL) {
    return;
  }
  find_k(root->right, k, v);
  if (v.size() < k) {
    v.push(root);
    find_k(root->left, k, v);
  }
}
