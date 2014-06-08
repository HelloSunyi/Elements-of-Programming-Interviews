#include <iostream>
#include "node.h"

using namespace std;

// Two steps, use prev, cur, next.
// Step 1, top to bottom, prev is parent of cur.
// Step 2, bottom to top, prev is child of cur.
//

void inorder_traversal(node* root {
  if (!root)
    return;
  node* prev = NULL;
  node* cur = root;
  node* next = NULL;

  while (cur) {
    if (!prev || prev->left == cur || prev->right ==cur) {
      if (cur->left)
        next = cur->left;
      else {
        cout << cur->val << endl;
        next = (cur->right) ? cur->right : cur->parent;
      }
    } else if (prev == cur->left) {
      cout << cur->val << endl;
      next = cur->right ? cur->right : cur->parent;
    } else {
      next = cur->parent;
    }
    prev = cur;
    cur = next;
  }
}
