#include <iostream>
#include <vector>

using namespace std;

ing find_one(vector<int> V) {
  int one = 0, two = 0, three = 0;
  for (int i = 0; i < V.size(); i++) {
    two = two | one & A[i];
    one = one ^ A[i];
    three = tow & one;
    one = one & ~three;
    two = two & ~three;
  }
  return one;
}
