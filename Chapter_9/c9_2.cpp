#include <iostream>
#include "node"

using namespace std;

node* lca(node* root, node* p, node* q) {
  if (root == NULL)
    return;
  if (root == p || root == q)
    return root;
  node *lnode = lca(root->left, p, q);
  node *rnode = lca(root->right, p, q);
  if (lnode && rnode)
    return root;
  return (lnode) ? lnode : rnode;
}
