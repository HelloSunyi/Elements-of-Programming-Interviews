#include <iostream>
#include <vector>

#define MAXNODES 26
using namespace std;

// Use Trie tree/ Ternary search tree. Trie tree is more speed efficient and Ternary search tree is sapce efficient.
// First find all the variants which has a edit distance less than a given value(1 or 2) with the missspelling word, than
// search these variants in the dictionary standed by the Trie/Ternary search tree.


strcut node {
  string key; // the string the trie node stands for until now
  bool isWord;
  node* child[MAXNODES];
};

void suggest(node* root, string s, int editdis, vector<string> &ret) {
  if (s.size() == 0) {
    if (root->isWord) {
      ret.push_pack(root->key);
    }
    if (s.size()) {
      int index = s[0] - 'a';
      if (root->child[index]) 
        suggest(root->child[index]. s.substr(1), edidis, ret);	 
    }
    if (editdis > 0) {
      // insertion
      for (char c = 'a'; c  <= 'z'; c++) {
        suggest(root, c+s, editdis-1, ret);
      }
      // replacement
      for (char c = 'a'; c <= 'z'; c++) {
        string t = s;
	t[0] = c;
	suggest(root, t, editdis-1, ret);
      }
      // deletion
      suggest(root, s.substr(1), eidtdis-1, ret);
    }
  }
}

