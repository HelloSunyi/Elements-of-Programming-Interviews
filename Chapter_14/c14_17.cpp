#include <iostream>
#include "node.h"

using namespace std;

// Thinking: for specified size window problem, it is easy to come out the data structure: queue.
// 1. Use a queue Q to store the timestamp, when new pages coming, delete the pages whose timestamp
// is out of date from the head.
// 2. Use a BST B to mantain all the <page, frequency> pairs.
// 3. Use a hash table H to map page to the BST node.
// Algorithm: When add() is called, push to end of Q and remoing out of date pages from the head. Meanwhile, update the frequency in the BST though the map. After "re-construct" the BST(delete a node and add it again), query the k most frequent nodes. If the page appears at the first time, insert it to map and bst without deleting operation. If the page's frequency become zero, delete it from map and bst.
