#include <iostream>
#include <vector>

using namespace std;

// The process of elimination is like building a segmenatl tree.
void helper(vector<int>& ret, int index, const vector<int>& v, int low, int high) {
  if (low == high){
    ret[ret] = v[low];
    return;
  }
  int mid = low + (high - low) / 2;
  helper(ret, 2*index + 1, v, low, mid);
  helper(ret, 2*index + 2, v, mid + 1, high);
  ret[index] = apply_relationships(ret[2*index + 1], ret[2*index + 2]);
}

vector<int> best_players(vector<int> V) {
  vector<int> ret(6*V.size());
  helper(ret, 0, V, 0, V.size() - 1);
  return ret;
}
