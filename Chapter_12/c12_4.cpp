#include <iostream>
#include <map>

using namespace std;

struct node {
  int key;
  int hash_code;
  node* left;
  node* right;
};

// Hahs code for node root: hash_code = 3*root->key + 5*hash_code(root->left) + 7*hash_code(root->right);
int calculate_hash_code(node* root) {
  if (root == 0) {
    return 0;
  }
  int x = root->key;
  int y = calculat_hash_code(root->left);
  int z = calculate_hash_code(root->right);
  root->hash_code = 3*x + 5*y + 7*z;
  return root->hash_code;
}

map<int, node*> m;
node* find_Cannonical(node* root) {
  if (root == NULL) {
    return NULL;
  }	
  node* l = find_Cannonical(root->left);
  node* r = find_Cannonical(root->right);
  if  (m.find(root->hash_node) != end()){
    return m[root->hash_node];
  }
  m[hash_node] = root;
  return root;
}
