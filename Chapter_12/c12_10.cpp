#include <iostream>
#include <map>
#include <vector>

using namespace std;

int max_points(vector<pair<int, int> > V) {
  map<float, int> m;
  int max = INT_MIN;
  for (int i = 0; i < V.size(); i++) {
    m.clear();
    m[INT_MIN] = 0; //stands for itself;
    int sameP = 1;
    for (int j = i+1; j < V.size(); j++) {
      if (V[i].first == V[j].first && V[i].second == V[j].second) {
        sameP++;
	continue;
      }
      int k = (V[i].first == V[j].first) ? INT_MAX : (float)(V[i].first -V[j].first)/(V[i].second -V[j].second);
      m[k]++;
      map<float, int>::iterator it;
      for(it = m.begin(); it != m.end(); it++) {
        if (it->second + sameP > max)
           max = it->second + sameP;
      }
    }
  }
  return max;
}
