#ifndef NODE
#define NODE

struct node {
  int val;
  node *left;
  node *right;
  node(): val(0), left(NULL), right(NULL) {}
};
#endif
