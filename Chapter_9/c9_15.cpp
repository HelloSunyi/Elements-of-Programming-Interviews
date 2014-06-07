#include <iostream>
#include <string>
#include "node.h"

#define NUM 24
using namespace std;

struct trie_node {
  int val;
  trie_node* child[NUM];
  trie_node(): val(10) {
    for (int i = 0; i < NUM; i++)
       child[i] = NULL;	  
  }
};

void insert(trie_node* root, string s) {
  int index = 0;
  while (index < s.size()) {
    if (root->child[s[index] - 'a'] == NULL) {
      root->child[s[index] - 'a'] = new trie_node();
    }
    root = root->child[s[index] - 'a'];
  }
  root->val = 1;
}

string getShortPrefix(trie_node* root, string s) {
  string prefix = "";
  int index = 0;
  while (index < s.size()) {
    prefix += s[index];
    if (!root->child[s[index] - 'a'])
      return prefix;
    root = root->child[s[index] - 'a'];
  }
  return "";
}
