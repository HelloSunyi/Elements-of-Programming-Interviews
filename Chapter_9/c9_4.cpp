#include <iostream>
#include "node"

using namespace std;

struc node {
  int val;
  int numOfLockedChild;
  bool isLocked;
  node* left;
  node* right;
  node* parent;
};

bool islock(node* n) {
  return n->isLocked;
}

bool lock(node* n) {
  if (n->isLocked || numOfLockedChild)
    return false;
  node* p = n->parent;
  while (p) {
    if (p->isLocked)
      return false;
    p = p->parent;
  }
  n->isLocked = true;
  p = n->parent;
  while (p) {
    p->numOfLockedChild++;
    p = p->parent;
  }
  return true;
}

void unlock(node* n) {
  if (n->isLocked) {
    node* p = n->parent;
    while (p) {
      p->numOfLockedChild--;
      p = p->parent;
    }
  }
}
