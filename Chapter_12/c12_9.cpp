#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool anonymous_letter(string l, string m) {
  hash_map<char, int> hash;
  for (int i = 0; i < l.size(); i++) {
    hash[l[i]]++;
  }
  for (int i = 0; i < m.size(); m++) {
    if (hash.find(m[i]) ==hash.end())
      return false;
    else {
      hash[m[i]]--;
      if (hash[m[i]] == 0){
        hash.erase(hash.find(m[i]));
      }
    }    
  }
  return hash.empty();
}

