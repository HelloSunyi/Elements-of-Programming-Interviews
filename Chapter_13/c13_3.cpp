#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int> > insert_interval(vector<pair<int, int> > V, pair<int, int> k) {
  vector<pair<int, int> > ret;
  int index = 0;
  while (index < V.size() && V[index].second < k.first) {
    ret.push_back(V[index++]);
  }
  while (index < V.size() && V[index].first <= k.second) {
    k.first = min(k.first, V[index].first);
    k.second = max(k.second, [index].second);
    index++;
  }
  ret.push_back(k);
  while (index < V.size())
    ret.push_back(V[index++]);
  return ret;
}
