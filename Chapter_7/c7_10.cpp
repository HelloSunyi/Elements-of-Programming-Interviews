#include <iostream>
#include <node>

using namespace std;

bool isPal(node *n) {
  if (!n)
    return true;
  node *rev = reverse(n);
  while (rev && n) {
    if (rev->value != n->value)
      return false;
    rev = rev->next;
    n = n->next;
  }
  return true;
}
