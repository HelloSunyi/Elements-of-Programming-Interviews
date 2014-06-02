#include <iostream>
#include <queue>

void print_level(node *root) {
  queue<node *> q1, q2;
  q1.push(root);
  while (!q1.empty()) {
    node *tmp = q1.front();
    q1.pop();
    cout << tmp->val << " ";
    if (tmp->lef)
      q2.push(tmp->left);
    if (tmp->right)
      q2.push(tmp->right);
    if (q1.empty()) {
      cout<<endl;
      q1 = q2;
      q2.clear();
    }
  }
}
