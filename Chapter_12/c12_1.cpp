#include <isotream>
#include <algorithm>
#include <iostream>
#include <algorithm>
#include <hash_map>

using namespace std;

vector<vector<string> > find_anagrams(const vector<string>& s) {
  hash_map<string, vector<string> > hash;
  for (int i = 0; i < s.size(); i++) {
    string t = s[i];
    sort(t.begin(), t.end());
    hash[t].push_back(s[i]);
  }
  hash_map<string, vector<string> >:: iterator it;
  vector<vector<string> > res;
  for (it = hash.begin(); it != hash.end() && it->second.size() > = 2; it++) {
    vector<string> t = it->second;
    res.push_back(t);
  }
  return res;
}
