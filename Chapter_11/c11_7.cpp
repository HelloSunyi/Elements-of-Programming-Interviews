#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int get_upper_bound(const vector<in>& V, int k) {
  int low = 0;
  int high = V.size() - 1;
  while (low < high) {
    int mid = low + (high - low)/2;
    if (V[mid] >= k)
      high = mid;
    else
      low = mid + 1;
  }
  return (V[low] >= k) ? low : -1;
}

int completion_search(const vector<int>& V, int budget) {
  vector<int> prefix_sum(V.size());
  sort(V.begin(), V.end());
  prefix_sum[0] = V[0];
  for (int i = 1; i < V.size(); i++) {
    prefix_sum[i] = prefix_sum[i-1] + V[i];
  }
  for (int i = 0; i < V.size(); i++) {
    prefix_sum += V[i] * (V.size() - i - 1);
  }
  int ub = get_upper_bound(prefix_sum, budget);
  if (ub == -1)
    return -1;
  int cost = prefix_sum[ub] - bugdget;
  return (V[ub] - cost / (V.size() - ub));
}
