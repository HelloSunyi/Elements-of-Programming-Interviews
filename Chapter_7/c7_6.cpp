#include <iostream>
#include <node>

using namespace std;

node *odd_even(node *n) {
  node *pre_odd = new node();
  node *pre_even = new node();
  node *cur_odd = pre_odd;
  node *cur_even = pre_even;
  int flat = 0;
  while (n) {
    if (!flag) {
      flag = !flag;
      cur_odd->next = n;
      cur_odd = cur_odd->next;
    } else {
      flag = !flag;
      cur_even->next = n;
      cur_even = cur_even->next;
    }
    n = n->next;
  }
  cur_odd->next = NULL;
  cur_even->next = pre_old->next;
  return pre_even->next;
}
