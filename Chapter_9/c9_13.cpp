#include <iostream>
#include "node"

using namespace std;

int lengh (node* r) {
  if (r == NULL)
    return 0;
  int l = 0;
  while (r) {
    l++;
    r = r->parent;
  }
  return l;
}
node* lca_ (node* p, node* q) {
  int lp = lengh(p);
  int lq = lengh(q);
  if (lp > lq)
    swap(p, q);
  int d = abs(lp - lq);
  while (d) {
    d--;
    lp = lp->parent;
  }
  while(lp && lq) {
    if (lp == lq)
      return lp;
    lp = lp->parent;
    lq = lq->parent;
  }
}
