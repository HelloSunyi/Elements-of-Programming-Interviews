// subarray => continous => prefix sum
#include <iostream>
#include <stdio>

using namespace std;

int bs(vector<int> v, int k) {
  int low = 0, high = v.size();
  while (low < high) {
    int mid = low + (high-low)/2;
    if (v[mid] <= k) {
      low = mid+1;
    } else {
      high = mid;
    }
  }
  return high - 1;
}

int search(vector<int> v, int k) {
  vector<int> prefix_sum(v.size(), 0);
  prefix_sum[0] = v[0];
  for (int i = 1; i < v.size(); i++) {
    prefix_sum[i] = prefix_sum[i-1] + v[i];
  }
  vector<int> min_prefix_sum = prefix_sum;
  for (int i = v.size() - 2; i >= 0; i--) {
    min_prefix_sum[i] = min(min_prefix_sum[i], min_prefix_sum[i+1]);
  }
  int ret = 0;
  for (int i = 0; i < v.size(); i++) {
    int j = bs(min_prefix_sum[i], v[i]+k);
    ret = max(ret, j - i + 1);
  }
  return ret;
}
