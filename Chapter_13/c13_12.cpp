#include <iostream>
#include <map>
#include <algorithm>

struct Interval {
  int l;
  int r;
};

struct Point {
  int value;
  int index;
  bool isLeft;
};

struct cmp {
  bool operator()(Point p1, Point p2) {
    return p1.value == p2.value ? p2.isLeft : p1.value < p2.value;
  }
};

vector<int> find_minimum_visits(vector<Interval> V) {
  vector<Point> p(V.size());
  for (int i = 0; i < V.size(); i++) {
    Point t;
    t.value = V[i].l;
    t.isLeft = true;
    t.index = i;
    p.push_back(t);
    t.value = V[i].r;
    t.isLeft = false;
    p.push_back(t);
  }
  sort(p.begin(), p.end(), cmp);
  map<int, int> coverd;
  vector<Point> covering;
  vector<int> ret;
  for (int i = 0; i < P.size(); i++) {
    if (P[i].isLeft) {
      corvering.push_back(P[i]);
    } else (coverd.find(P[i].index) == coverd.end()) {
      ret.push_back(P[i].value);
      for (int j = 0; j < coveing.size(); j++)
        cover[covering[i].index] = 1;
      covering.clear();
    }
  }
  return ret;
}
