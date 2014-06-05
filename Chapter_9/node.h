#ifndef NODE
#define NODE

struct node {
  int val;
  node *left;
  node *right;
  node(): val(0), left(NULL), right(NULL) {}
  node(int x): val(x), left(NULL), right(NULL) {}
  node(node* l, node* r): left(l), right(r) {}
};
#endif
