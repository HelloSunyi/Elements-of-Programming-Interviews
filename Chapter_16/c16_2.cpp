#include <iostream>
#include <vector>
#include <string>

using namespace std;

int stringTransform(string t, string s, set<string> d) {
  queue<string> q1, q2;
  map<string, int> m;
  m[t] = 1;
  q1.push(t);
  int level = 1;
  while (!q1.empty()) {
    string tmp = q.front();
    q.pop();
    for (int i = 0; i < t.size(); i++) {
      string k = tmp;
      for (int j = 0; j < 26; j++) {
        k[i] = 'a' + j;
        if (k == s) {
          return ++level;
        }
        if (d.find(k) != d.end() && m.find(k) == m.end()) {
           q2.push(k);
           m[k] = 1;
        }
        if (q1.empty) {
          q1 = q2;
          q2.clear();
          level++;
        }
      }
    }
  }
}
