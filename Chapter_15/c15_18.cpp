#include <iostream>
#include <vector>

using namespace std;

int helper(vector<int> c, vector<vector<int> > t, int a, int b) {
  if (a > b) {
    return 0;
  }
  if (t[a][b] == -1) {
    t[a][b] = max(c[a] + min(helper(c, t, a+2, b), helper(c, t, a+1, b-1)),
              max(c[b] + mi(helper(c, t, a, b-2), helper(c, t, a+1, b-1)));
  }
  return t[a][b];
}
