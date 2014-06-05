#include <iostream>
#include "node"

using namespace std;

struc lnode {
  int val;
  lnode* next;
}
void colect_leaves(node* root, lnode* n) {
  if (root == NULL)
    return;
  colect_leaves(root->left, n);
  if (root->left == NULL && root->right == NULL) {
    n->next = root;
    n = n->next;
  }
  colect_leaves(root->right, n);

}
