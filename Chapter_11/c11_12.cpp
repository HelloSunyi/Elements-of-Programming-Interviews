#include <iostream>
#include <vector>

pair<int, int> find_min_max(vector<int> A) {
  if (A.size() == 1)
    return {A[0], A[0]};
  pair<int, int> m;
  m.first = min(A[0], A[1]);
  m.second = max(A[0], A[1]);
  for (int i = 2; i < A.size(); i+=2) {
    m = {min(m.first, min(A[i], A[i+1]), max(m.second, max(A[i], A[i+1])};
  }
  if (A.size() & 1)
    m = {min(m.first, A.back()), max(m.second, A.back())};
  return m;
}
