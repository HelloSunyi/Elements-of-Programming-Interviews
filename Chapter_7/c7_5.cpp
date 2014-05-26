#include <iostream>
#include <node>

node *overlapping_lists(node *n1, node *n2) {
  node *c1 = cyclicity(n1);
  node *c2 = cyclicity(n2);
  if (c1 && !c2 || !c1 && c2)
    return NULL;
  if (!c1 && !c2)
    return intersection(c1, c2);
  node *tmp = c1->next;
  while (tmp != c2 && tmp != c1)
    tmp = tmp->next;
  return (tmp == c2) ? tmp : NULL;
}
