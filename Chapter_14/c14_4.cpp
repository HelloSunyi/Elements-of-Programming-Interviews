#include <iostream>
#include "node.h"

using namespace std;

void first_big(node* root, int k, node* &fir) {
  if (root == NULL)
    return;
  if (root->val > k) {
    fir = root;
    first_big(root->left, k, fir);
  } else (root-val <= k) {
    first_big(root->right, k, fir);
  }
} 
