#include <iostream>
#include "node.h"

using namespace std;

// 1. For case 1, call to common() after all add(). Use a hash to store each <page, freq> and after all add() finished,
// iterate through the hash to store in a vector and use selection algorithm to get the most k common.
// 2. For case 2, it is easy to think of using bst. To ease the searching overhead, use a hash to map a page p to a node n in the bst.
// BST is build on the pages's frequency, for a add(), firstly search the hash, if a node n is mapped, we update node n and re-order bst:
// delelte node n and then insert it again. If node n is not found, we add a new record to both hash and bst. The common() method could
// be implemented by first find the max one (the most right one), then find its k predecessors (similar with finding successor, with pairent pointer).
