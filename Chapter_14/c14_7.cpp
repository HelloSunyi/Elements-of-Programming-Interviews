#include <iostream>
#include <vector>
#include "node.h"

using namespace std;


void BSTtoL(node* r,node* &head, node* &tail) {
  if (r == NULL) {
    return;
  }
  node *lt, *rh;
  BSTtoL(r->left, head, lt);
  BSTtoL(r->right, rh, tail);
  if (lt) {
    lt->right = r;
    r->left = lt;
  } else {
    head = r;
  }
  if (rh) {
    r->right = rh;
    rh->left = r;
  } else {
    tail = r;
  }
} 
