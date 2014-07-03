#include <iostream>
#include <vector>

using namespace std;

// f(c,d) = f(c-1,d-1)+1 + f(c,d-1);
int helper(vector<vector<int> >& f, int c, int d) {
  if (c == 0 || d == 0)
    return 0;
  if (c == 1)
    return d;
  if (f[c][d] == -1) {
    f[c][d] = helper(f, c-1, d-1) + 1 + helper(f, c, d-1);
    return f[c][d];
  }  
}
