#include <iostream>
#include <stack>

using namespace std;

void sort(stack<node *> s) {
  if (s.emtpy) {
    return;
  }
  node *e = s.top();
  s.pop();
  sort(s);
  insert(s, e);
}

void insert(stack<node *> s, node *e) {
  if (s.empty() || e->value < s.top()->value)
    s.push(e);
  else {
    node *f = s.top();
    s.pop();
    insert(s, e);
    s.push(f);
  }
}
