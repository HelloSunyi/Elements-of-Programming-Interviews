#include <isotream>
#include <vector>
#include <string>
#include <hash_map>

using namespace std;

string nearest_repitition(vector<string> s) {
  hash_map<string, int> h;
  hash_map<string, int> m;
  for (int i = 0; i <  s.size(); i++) {
    if (h.find(s[i]) != h.end()) {
      m[s[i]] = min(m[s[i]], i - h[s[i]]);
      h[s[i]] = i;
    } else {
      m[s[i]] = INT_MAX:
      h[s[i]] = i;
    }
  }
  hash_map<string, int> :: iterator it;
  int min = INT_MAX;
  string ret;
  for (it = m.begin(); it != m.end(); it++) {
    if (min > it->second){
      min = it->second;
      ret = it->first;
    }
  }
  return ret;
}
