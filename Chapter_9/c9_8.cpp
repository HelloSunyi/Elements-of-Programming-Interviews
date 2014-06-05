#include <iostream>
#include <string>
#include "node"

using namespace std;

// Construct binary tree from in-order and pre-order traversal
node* construct_BT(const string& preorder, int lp, int hp, const string& inorder, int li, int hi) {
  if (lp > hp)
    return NULL;
  node* root = new node(preorder[lp]);
  int index = li;
  for (; index <= hi; index++) {
    if (inorder[index] == preorder[lp])
      break;
  }
  int d = index - li;
  root->left = construct_BT(preorder, lp + 1, lp + d, inorder, li, index - 1);
  root->right = construct_BT(preorder, lp + d + 1, hp, inorder, index + 1, hi);
  return root;
}
