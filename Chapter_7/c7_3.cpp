#include <iostream>
#include "node.h"

using namespace std;

int median(node *n) {
  if (!n) {
    return -1;
  }
  node *max = n;
  node *cur = n->next;
  int lengh = 1;
  while (cur != n) {
    lengh++;
    if (max->value <= cur->value) {
      max = cur;
    }
    cur = cur->next;
  }
  lengh = lengh/2;
  while (lengh) {
   max = max->next;
   lengh--;
  }
  return max->value;
}
