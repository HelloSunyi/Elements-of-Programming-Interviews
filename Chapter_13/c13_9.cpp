#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int> > task_assignment(vector<int> V) {
  sort(V.begin(), V.end());
  vector<pair<int, int> > p;
  for (int i = 0; i < V.size()/2; i++)
    p.push_back(pair<int, int>(V[i], V[V.size()-i-1]);
  return p;
}

// Find two sets which has the minimum sum difference
int minSum(vector<int> V) {
  sort(V.begin(), V.end());
  int sum1 = V[0];
  int sum2 = V[1];
  helper(V, 2, sum1, sum2);
  return abs(sum1 - sum2);
}

void helper(vector<int> V, int index, int& sum1, int& sum2) {
  if (index == V.size())
    return;
  if (sum1 <=sum2) {
    sum1 += V[index+1];
    sum2 += V[index];
  } else {
    sum2 += V[index+1];
    sum1 += V[index];
  }
  helper(V, index*2, sum1, sum2);
}
