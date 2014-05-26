#include <iostream>
#include "node.h"

using namespace std;

node* cyclicity (node *n) {
  node *one_s = n;
  node *two_s = n;
  while (one_s && two_s) {
    if(!one_s->next || !two_s->next || !two_s->next->next)
      return NULL;
    one_s = one_s->next;
    two_s = two_s->next->next;
    if (one_s == two_s)
      break;
  }
  one_s = n;
  while (one_s != two_s) {
    one_s = one_s->next;
    two_s = two_s->next;
  }
  return one_s;
}
