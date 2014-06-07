#include <iostream>
#include "node.h"

using namespace std;

void left_most_print(node* root, bool is_boundary) {
  if (!root)
    return;
  if (is_boundary || !root->left && !root->right)
    cout << root->val << endl;
  left_most_print(root->left, is_boundary);
  left_most_print(root->right, is_boundary && !root->left);  
}

void right_most_print(node* root, bool is_boundary) {
  if (!root)
    return;
  right_most_print(root->left, is_boundary && !root->right);
  right_most_print(root->right, is_boundary);
  if (is_boundary || root->left && root->right)
     cout << root->val <<endl; 
}

void print_(node* root) {
  if (root) {
    cout << root->val <<endl;
    left_most_print(root->left, true);
    right_most_print(root->right, true);`
  }
}
