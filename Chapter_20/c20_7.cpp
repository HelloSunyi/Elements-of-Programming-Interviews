#include <iostream>
#include <vector>

using namespace std;

vecot<int> online_sampling(int n, int k) {
  unordered_map<int, int> h;
  for (int i = 0; i < k; i++) {
    int r = gen_random(0, n - 1 - i);
    if (h.find(r) == h.end() && h.find(n-i-1) == h.end()) {
      h[n-1-i] = r;
      h[r] = n-1-i;
    } else if (h.find(r) == h.end() && h.find(n-i-1) != h.end()) {
      h[r] = h[n-1-i];
      h[n-i-i] = r;
    } else if (h.find(r) != h.end() && h.find(n-i-1) == h.end()) {
      h[n-i-i] = h[r];
      h[r] = n - i - 1;
    } else {
      swap(h[r], h[n-1-i]);
    }
  }
  vector<int> ret;
  for (int i = 0; i < k; i++) {
    ret.push_back(h[n-i-1]);
  }
  return ret;
}
