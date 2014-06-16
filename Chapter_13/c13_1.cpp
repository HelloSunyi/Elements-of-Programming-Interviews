#include <iostream>
#include <vector>

using namespace std;

vector<int> find_elementds_in_common(vector<int> n, vector<int> m) {
  vector<int> ret;
  int i_n = 0, i_m = 0;
  while (i_n < n.size() && i_m < n.size()) {
    if (n[i_n] == m[i_m] && (ret.size() == 0 || ret.back() != n[i_n])) {
      ret.push_back(n[_n];
      i_n++;
      i_m++;
    } else if (n[i_n] == m[i_m]) {
        i_n++;
    } else {
        i_m++;
    }
  }
  return ret;
}
