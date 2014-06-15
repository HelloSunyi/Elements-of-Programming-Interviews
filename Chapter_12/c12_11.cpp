#include <iostream>
#include <hash_map>
#include <vector>

using namespace std;

vector<int> find_frequent_items(vector<int> V, int k) {
  hash_map<int, int> hash;
  int n = 0;
  while (n < V.size()) {
    hash[V[n++]]++;
    if (hash.size() == k+1) {
      hash_map<int, int> ::iterator it;
      for(it = hash.begin(); it != hash.end(); it++) {
        if (--it->second == 0)
	  hash.erase(it);
      }
    }
  }
  hash_map<int, int> :: iterator it;
  for(it = hash.begin(); it != hash.end(); it++) {
    it->second == 0;
  }
  n = 0;
  while (n < V.size())
    hash[V[n++]]++;
  vector<int> ret;
  hash_map<int, int> :: iterator it;
    for(it = hash.begin(); it != hash.end(); it++) {
      if (it->second > n/k)
	 ret.push(it->first);
    }
  return ret;
}
