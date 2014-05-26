#include <iostream>
#include <node>

using namespace std;

int lengh(node *n) {
  if (!n) {
    return NULL;
  }
  int l = 0;
  while (n) {
    l++;
    n = n->next;
  }
  return l;
}
node *intersection(node *n1, node *n2) {
  int l1 = lengh(n1);
  int l2 = lengh(n2);
  int l = abs(l1 - l2);
  if (l1 > l2) {
    while (l) {
      l--;
      n1 = n1->next;
    }
  } else {
    while (l) {
      l--;
      n2 = n2->next;
    }
  }
  while (n1 && n2 && n1 != n2) {
    n1 = n1->next;
    n2 = n2->next;
  }
  return n1;
}
