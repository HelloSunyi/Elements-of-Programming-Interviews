#include <iostream>
#include <node>
#include <stack>

using namespace std;

void print(node *n) {
  stack<node *> s;
  while (n || !s.empty()) {
    if (n) {
      s.push(n);
      n = n->left;
    } else {
      n = s.top();
      s.pop();
      cout << n->value << end;
      n = n->right;
    }
  }
}
