#include <iostream>
#include <node>


node *delete(node *n, node *v) {
  if (!node)
    return NULL;
  v->value = v->next->value;
  v->next = v->next->next;
  return n;
}
