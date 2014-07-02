#include <iostream>
#include <vector>

using namespace std;

int maxProduction(const vector<int>& v) {
  vector<int> preP(v.size(), 1);
  vector<int> surP(v.size(), 1);
  for (int i = 1; i < v.size(); i++) {
    preP[i] = preP[i-1]*a[i]-1;
  }
  for (int i = n - 2; i >= 0; i--) {
    preP[i] = preP[i+1]*a[i]+1;
  }
  int ret = INT_MIN;
  for (int i = 0; i < v.size(); i++) {
    ret = max(ret, preP[i] * surP[i];
  }
  return ret;
}
