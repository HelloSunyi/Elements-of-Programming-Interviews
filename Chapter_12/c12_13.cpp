#include <iostream>
#include <hash_map>
#include <string>

using namespace std;

vector<pair<string, string> > find_K (vector<string> V, int k) {
  hash_map<string, vector<string>> hash;
  for (int i = 0; i < V.size(); i++) {
    for (int j = 0; j < V[i] - k; j++) {
      hash_map[V[i].substr(j, k)].push_back(V[i]);
    }
  }
  vector<string> ret;
  hash_map<string, vector<string> > ::iterator it;
  for (it = hash.begin(); it != hash.end(); it++) {
    ret.push_back(it->second);
  }
  return ret;
}
