#include <iostream>
#include <vector>

using namespace std;

vector<int> sampling(vector<int> v, int k) {
  if (k == v.size()){
    return v;
  }
  for (int i = 0; i < k; i++) {
    int j = gen_random(i, v.size() - 1);
    swap(v[i], v[j]);
  }
  return v;
}
