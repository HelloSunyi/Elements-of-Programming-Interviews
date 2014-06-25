#include <iostream>
#include "node.h"

using namespace std;

// Two solutions:
// 1. First find the first element l that is more than L and the last element u that is less than U.
// Then find their lca c, so the numbers between [L,U] is c.size - l.size - u.size;
