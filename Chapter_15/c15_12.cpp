#include <isotream>
#include <stdio>

using namespace std;

bool word_break(string s) {
  vector<bool> ret(s.size(), false);
  for (int i = 0; i < s.size(); i++) {
    if (ret[i] || s.substr(0, i+1)){
      ret[i] = true;
      for (int j = i+1; j < s.size(); j++) {
        if (s.substr(i+`, j - i + 1)) {
	  ret[j] =true;
	  if (j == s.size() - 1)
		  return true;
	}
      }
    }
  }
}
