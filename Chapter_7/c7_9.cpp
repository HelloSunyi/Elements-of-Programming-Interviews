#include <iostream>
#include <node>

using namespace std;

node *reverse(node *n) {
  if (!n || !n->next)
    return n;
  node *cur = n;
  node *rev = NULL;
  node *tmp = NULL;
  while (cur) {
    tmp = cur->next;
    cur->next = rev;
    rev = cur;
    cur = tmp;
  }
  return rev;
}
