#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_palim(string s) {
  if (s.size() == 0) {
    return true;
  }
  vector<int> table(256, 0);
  for (int i = 0; i < s.size(); i++) {
    table[s[i]]++;
  }
  int even_number = 0;
  for (int i = 0; i <table.size(); i++) {
    if (table[i] & 1)
      even_number++;	    
  }
  return (even_number <= 1) ? true : false;
}
