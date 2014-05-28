#include <iostream>
#include <node>

node *delete_k(node *n, int k) {
  if (k == 1)
    return n->next;
  node *cur = n;
  node *ahead = n;
  node *pre = NULL;
  while (k && ahead) {
    k--;
    ahead = ahead->next;
  }
  if (k)
    return NULL;
  while (ahead) {
    pre = cur;
    cur = cur->next;
    ahead = ahead->next;
  }
  pre->next =pre->next->next;
  return n;
}
