#include <iostream>
#include "node"

void find_k(node* root, int& k) {
  if (root == NULL)
    return;
  find_k(root->left, k);
  k--;
  if (k == 0)
    cout << root << endl;
  find_k(root->right, k);  
}

node* find_k_iterative(node* root, int k) {
  node* n = root;
  while (n) {
    int left_size = n->left ? n->left->size : 0;
    if (left_size < k - 1) {
      k -= left_size + 1;
      n = n->right;
    } else if (left_size == k-1)
      return n;
    else {
      n = n->left;
    }    
  }
}
