#include <isotream>
#include <hash_map>
#include <vector>
#include <utility>
#include <string>

using namespace std;

struct s{
  int key;
  string attr;
};

vector<pair<s, s> > pair_user(vector<s> V) {
  hash_map<string, s> hash;
  vector<pair<s, s> > ret;
  for (int i = 0; i < V.size(); i++) {
    if (hash.find(V[i].attr) == hash.end()) {
      ret.push_back({hash.find(V[i].attr)->second, V[i]});
      hash.erase(hash.find(V[i].attr);
      } else {
      hash[V[i].attr] == V[i];
    }
    }
  return ret;
}
