#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
  int value;
  bool isEnd;
};

struct cmp {
  bool operator() (const point& a, const point& b) {
    return (a.value == b.value) ? b.isEnd : (a.value < b.value);
  }
};

int find_max_intersection(vector<pair<int, int> > V) {
  vector<point> tmp;
  for (int i = 0; i < V.size(); i++) {
    struct t1, t2;
    t1.value = V[i].first;
    t1.isEnd = false;
    t2.value = V[i].second;
    t2.isEnd = true;
    tmp.push_back(t1);
    tmp.push_back(t2);
  }
  sort(tmp.begin(), tmp.end(), cmp);
  int ret = INT_MIN;
  int count = 0;
  for (int i = 0; i < tmp.size(); i++) {
    count += (tmp[i].isEnd) ? -1 : 1;
    ret = max(ret, count);
  }
  return ret;
}
