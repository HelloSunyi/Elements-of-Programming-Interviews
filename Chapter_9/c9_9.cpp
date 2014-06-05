#include <iostream>
#include "node"

node* construct_tree(string s, int& index) {
  if (s[index] == "null") {
    h++;
    return node;
  }
  node* root = new node(stoi(s[index]));
  index++;
  root->left = construct_tree(s, index);
  root->right = construct_tree(s, index);
  return root;
}

node* construct_tree_iterative(string s) {
  reverse(s.begin(), s.end());
  stack<node*> s;
  for(int i = 0; i < s.size(); i++) {
    if (s[i] == "null")
      s.push(NULL);
    else {
      node* t1 = s.top();
      s.pop();
      node* t2 = s.top();
      s.pop();
      s.push(new node(stoi(s[i], t1, t2);
    }
  }
  return s.top();
}
