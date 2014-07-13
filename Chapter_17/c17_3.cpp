#include <iostream>
#include <vector>

using namespace std;
// solution 1: similar with subset problem, just construct the dp[v.size()+1][sum/2+1] table, find the largest colum index j that dp[v.size()][j] is true
// solution 2: use map
int minimize_diff(vector<int> v) {
  int sum = accumulate(v.begin(), v.end(), 0);
  map<int> m;
  m.push(0);
  for (int i = 0; i < v.size(); i++) {
    for (int j = sum/2; j >= i; j--) {
      if (m.find(j-i) != m.end()) {
        m.push(j);
      }
    }
  }
  for (int i = sum/2; i >= 0; i--) {
    if (m.find(i) != m.end()) {
      return sum - i - i;
    }
  }
  return sum;
}
