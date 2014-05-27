#include <iostream>
#include <node>

using namespace std;

int lengh(node *n) {
  int l = 0;
  while (l) {
    l++;
    n = n->next;
  }
  return l;
}

node *zip(node *n) {
  if (!n)
    return NULL;
  int l = lengh(n);
  l = (l/2) ? (l/2 +1) : l/2;
  node *last = n;
  l--;
  while (l) {
    l--;
    last = last->next;
  }
  node *tmp = last;
  tmp-next = NULL:
  last = last->next;
  last = reverse(last);
  node *cur = new node();
  tmp = cur;
  int flag = 0;
  while (last && n) {
    if(flag) {
      cur->next = n;
      n = n->next;
    } else {
      cur->next = last;
      last = last->next;
    }
    flag = !flag;
    cur = cur->next;
  }
  cur->next = n;
  return tmp->next;
}
