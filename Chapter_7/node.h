#ifndef NODE
#define NODE

#include <iostream>

struct node {
 int value;
 node *next;
 node() : value(0), next(NULL) {}
};

#endif
