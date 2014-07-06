#include <iostream>
#include <vector>

using namespace std;

vector<int> sampling(istringstream* sin, int k) {
  vector<int> ret;
  int x;
  for (int i = 0; i < k; i++) {
    *sin >> x;
    k.push_back(x);
  }
  int index = k;
  while (*sin >> x) {
    int tar = gen_random(0, index++);
    if (tar < k) {
      ret[tar] = x;
    }
  }
  return ret;
}
