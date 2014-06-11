#include <iostream>

char a[256];
char b[256];

bool re_construct(string s, string t) {
  for (int i = 0; i < s.size(); i++) {
    a[s[i]]++;
  }
  for (int i = 0; i < t.size(); i++) {
    b[t[i]]++;
  }

  for(int i = 0; i < 256; i++) {
    if (b[i] < a[i])
      return false;
  }
  return true;
}
