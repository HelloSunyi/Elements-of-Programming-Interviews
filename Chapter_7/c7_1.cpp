#include <iostream>

struct node {
 int value;
 node *next;
 node() : value(0), next(NULL) {}
};

node* merge_nodes(node *F, node *L) {
  node *previous = new node();
  node *cur = previous;
  while (F && L) {
    if (F->value >= L->value) {
      cur->next = F;
      F = F->next;
    } else {
      cur->next = L;
      L = L->next;
    }
    cur = cur->next;
  }
  if (F) {
    cur->next = F;
  } else {
    cur->next = L;
  }
  return previous->next;
}
