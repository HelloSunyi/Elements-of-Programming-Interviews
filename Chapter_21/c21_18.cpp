#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int> > find_pairs(vector<vector<int> >& s_pre, vector<vecot<int> >& p_pre) {
  vector<int> s_pre_index(s_pre.size(), 0);
  vector<int> p_choice(p_pre.size(), -1);
  queue<int> free_s;
  for (int i = 0; i < s_pre.size(); i++) {
    free_s.push(i);
  }
  while (!free_s.empty()) {
    int i = free_s.front();
    int j = s_pre[i][s_pre_index[i]];
    if (p_chioce[j] == -1) {
      p_chioce[j] = i;
      free_s.pop();
    } else {
      auto old_pref = distance(p_pre[j].begin(), find(p_pre[j].begin(), p_pre[j].end(), p_chioce[j]));
      auto new_pref = distance(p_pre[j].begin(), find(p_pre[j].begin(), p_pre[j].end(), i));
      if (new_pref < old_pref) {
	free_s.push(p_chioce[j]);      
        p_chioce[j] = i;
        free_s.pop()
      }
    }
    s_pre_index[i]++;
  }
  vectpr<pair<int,int> > ret;
  for (int i = 0; i < p_pre.size(); i++) {
    ret.push_back(i, p_chioce[i]);
  }
  return ret;
}
