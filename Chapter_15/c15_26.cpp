// Huffman code. Use min heap, each time delete two nodes from heap, add the two node and then insert back to the heap, untill only one heap left
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct node {
  string s;
  node* left, *right;
  double prob;
};

struct cmp {
  bool operator()(node *a, node *b) {
    return a->prob > b->prob;
  }
};

void huffman(vector<node*> v) {
  priority_queue<node*, vector<node*>, cmp> heap;
  for (int i = 0; i < v.size(); i++) {
    heap.push(v[i]);
  }
  while (heap.size() > 1) {
    node* a = heap.top();
    heap.pop();
    node* b = heap.top();
    heap.pop();
    node *c = new node();
    c.prob = a.prob + b.prob;
    c.left = a;
    c.right = b;
    heap.push(c);
  }
  return heap.top();
}
