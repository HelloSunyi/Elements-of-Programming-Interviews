#include <iostream>
#include <deque>

using namespace std;

deque<int> de;

vector<int> sliding_window(const vector<int> &data, int w) {
  vector<int> ret;
  if (data.size() < w)
    return ret;
  for (int i = 0; i < w; i++) {
    while (!de.empty() && A[i] >= A[de.back()])
      de.pop_back();
    de.push_back(i);
  }

  for (int i = w; i < data.size(); i++) {
    ret.push_back(A[de.front()]);
    while (!de.empty() && A[i] >= A[de.back()])
      de.pop_back();
    de.push_back(i);
   while (!de.empty() && de.front() <= i - w)
     de.pop_front();
  }

  return ret;
}
