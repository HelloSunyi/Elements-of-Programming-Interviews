#include <iostream>
#include <stack>

vector<node *> sunset(vector<node *> n) {
  vector<node *> res;
  stack<node *> s;
  while (!n.empty()) {
    node *tmp = n.pop_back();
    while (!s.empty() && s.top()->value < tmp->value) {
      s.pop();
    }
    s.push(tmp);
  }
  while (!s.empty()) {
    res.push_back(s.top());
    s.pop();
  }
  return res;
}
