#include <iostream>
#include <hash_table>
#include "node"

using namespace std;

node* lca_(node* p, node* q) {
  hash_table<node*> h;
  while (p || q) {
    if (p){
      if (h.find(p) != h.end())
        return p;
      h.insert(p);
      p = p->parent;
    }
    if (q){
      if (h.find(q) != h.end())
        return q;
      h.insert(q);
      q = q->parent;
    }
  }
}
