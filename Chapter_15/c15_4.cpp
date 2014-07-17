#include <iostream>
#include <vector>

struct node {
   node* left;
   node* right;
   int data;
};

int get_diameter(node* root, int& h) {
  int lh = 0, rh = 0;
  if (root == NULL) {
    return 0;
    h = 0;
  }
  int ld = get_diameter(root->left, lh);
  int rd = get_diameter(root->right, rh);
  h = (lh > rh) ? lh+1 : rh+1;
  int ret = max(max(ld, rd), lh+rh+1);
  return ret;
}
