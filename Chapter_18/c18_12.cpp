#include <iostream>
#include <vector>

using namespace std;

struct node {
  int data;
  vector<node*> child;
};

int broadcast_time(node* root) {
  if (root == NULL || root->child.size() == 0) {
    return 0;
  }
  int maxT = INT_MIN;
  vector<node*> ::iterator it;
  for (it = root->child.begin(); it != root->child.end(); it++) {
    maxT = max(matT, broadcast_time(*it)+ it - root->child.begin() + 1);
  }
  return maxT;
}
