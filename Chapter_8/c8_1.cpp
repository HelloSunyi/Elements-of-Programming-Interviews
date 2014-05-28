#include <iostream>
#include <node>

using namespace std;

node *start = NULL;
node *max = NULL;
void push(node *n) {
  if (!start){
    start = n;
    max = new node(n->value);
  } else {
    n->next = start;
    start = n;
    if (n->value >= max.value) {
      node *tmp = new node(n->value);
      tmp->next = max;
      max = tmp;
    }
  }
}

node *pop() {
  if (!start)
    return NULL;
  node *tmp = start;
  start = start->next;
  tmp->next = NULL;
  if (tmp->value == max->value) {
    max = max->next;
  }
  return tmp;
}

int top() {
  if (!max)
    return -1;
  return max->value;
}
