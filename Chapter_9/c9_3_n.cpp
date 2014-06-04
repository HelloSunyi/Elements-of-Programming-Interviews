#include <iostream>
#include <node>

bool symmetric_tree(node *l, node *r) {
  if (!l && !r)
    return true;
  if (!l && r || l && !r)
    return false;
  if (l->val == r->val)
    return symmetric_tree(l->left, r->right) && symmetric_tree(l->right, r->left);
  return false;
}
