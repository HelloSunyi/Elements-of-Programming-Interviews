#include <iostream>
#include "node.h"

using namespace std;

// As solution c14_14, use two BST(with parent point) building on log interval's left end
// and right end, for search intervals in [L, U], first search left ends that is less than U
// and right ends that is more than L in two BST,
// and use a hash to find the ends in the same interval!
