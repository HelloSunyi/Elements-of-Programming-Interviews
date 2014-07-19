#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int waiting_time(vector<int> w) {
  sort(w.begin(), w.end());
  int ret = 0;
  for (int i = 0; i  < w.size(); i++) {
    ret+= w[i]*(w.size() - 1 - i);
  }
  return ret;
}
