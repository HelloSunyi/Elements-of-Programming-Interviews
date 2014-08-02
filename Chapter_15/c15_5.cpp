#include <iostream>
#include <vector>

using namespace std;

int lis(vector<int> v) {
  int max_ending_here = INT_MIN;
  int max_sum = INT_MIN;
  for (int i = 0; i < v.size(); i++) {
    max_ending_here = max(v[i], v[i] + max_ending_here);
    max_sum = max(max_sum, max_ending_here);
  }
}

// Solutions: 1 get the maximum subarray sum.
// 2. calculate the sum of the total array, then find the minimum subarray sum, then use total sum - minimum sum
// return max(1, 2)
