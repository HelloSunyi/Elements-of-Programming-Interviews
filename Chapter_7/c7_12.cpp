#include <iostream>
#include <node>

using namespace std;

node *copy_list(node *n) {
  if (!n)
    return NULL;
  node *p = n;
  while (p) {
    node *tmp = new node();
    tmp->value = p->value;
    tmp->next = p->next;
    p->next = tmp;
    p = tmp->next;
  }
  p = n;
  while (p) {
    if (p->jump)
      p->next->jump = p->jump->next;
    p = p->next->next;
  }
  p = n;
  node *copy = p->next;
  while (p->next) {
    node * tmp = p->next;
    p->next = tmp->next;
    p = tmp;
  }
  return copy;
}
