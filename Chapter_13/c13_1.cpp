#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// The key point is use pointer rather than string variable to swap.
struct cmp {
  bool operator() (string* s1, string* s2) {
    return (*s1) < (*s2);
  }
};

void sort(vector<string> S) {
  vector<string*> sptr;
  for (int i = 0; i < S.size(); i++) {
    sptr.push_back(&S[i]);
  }
  sort(sptr.begin(), sptr.end(), cmp);
}
