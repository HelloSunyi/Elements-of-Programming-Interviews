#include <iostream>
#include <vector>

using namespace std;

// 1. Get the prefix sum, for each prefix sum get value mod n
// 2. There are two cases: A) existing at least one prefix sum mod n == 0
// B) if not, at least two prefix sum has same mod value(pigeonhole principle), then sub them.

vector<int> find_sum_subset(const vector<int> &A){
  vector<int> prefix_sum(A.size(), 0);
  for(int i = 0; i < A.size(); i++){
    prefix_sum[i] += (i==0)? 0 : A[i-1];
    prefix_sum %= A.size();
  }
  vector<int> table(A.size(), -1); // hash table
  for(int i = 0; i < A.size(); i++){
    if(prefix_sum[i] == 0){
      vector<int> ans;
      //copy subarray 0 to i to ans
      return ans;
    } else if (table[prefix_sum[i]] != -1){
      vector<int> ans;
      // copy subarray table[prefix_sum[i]] to i to ans
      return ans;
    } else
      table[prefix_sum[i]] = i;
  }
}

