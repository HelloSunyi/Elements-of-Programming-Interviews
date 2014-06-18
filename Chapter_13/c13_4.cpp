#include <iostream>
#include <hash_map>
#include <vector>

using namespace std;

vector<int> sort(const vector<int>& V) {
  hash_map<int> hash;
  hash_map<int> indexM;
  for (int i = 0; i < V.size(); i++) {
    hash[V[i]]++;
  }
  hash_map<int>:: iterator it;
  int sum = 0;
  for (it = hash.begin(); it != hash.end(); it++) {
    indexM[it->first] = sum + (it != hash.begin()) ? (it-1)->second : 0;
  }
  for (int i = 0; i < V.size(); i++) {
    if (V[i] < 0)
       continue;
    swap(V[i], V[indexM[V[i]]]);
    V[indexM[V[i]]] = -V[indexM[V[i]]];
    i--;
  }
  for (int i = 0; i < V.size(); i++) {
    V[i] *= -1;
  }
  return V;
}

// If we want to get ordered duplications, just use BST based map!
