#include <iostream>
#include <vector>

using namespace std;

vector<int> search_in_close_array(const vector<int>& V, int k) {
  int index = 0;
  vector<int> ret;
  while (index < v.size()) {
    if (V[index] == k) {
      ret.push_back(V[index]);
      index++;
    }
    else {
      index += abs(V[index] - k);
    }
  }
}
