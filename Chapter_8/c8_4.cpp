#include <iosteam>
#include <stack>

struct node {
  node *next;
  node *jump;
  int value;
  int order;
  node(): next(NULL), jump(NULL), value(0), order(-1) {}
};

void recursion(node *n, int &v) {
  if (n->order != -1  || !v)
    return;
  n->order = v++;
  recursion(n->jump, v);
  recursion(n->next, v);
}

void iteration(node *n) {
  int  v = 0;
  stack<node *> s;
  s.push(n);
  while (!s.empty()) {
    node *tmp = s.top();
    s.pop();
    if (tmp && tmp->order == -1) {
      tmp->order = v++;
      s.push(tmp->next);
      s.push(tmp->jump);
    }  
  }
}

