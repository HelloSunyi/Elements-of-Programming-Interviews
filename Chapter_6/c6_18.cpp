#include <iostream>
#include <string>

string encode(string s){
  int count = 1;
  string ret;
  for(int i = 1; i < s.size(); i++){
    if(s[i] == s[i - 1]){
      count++;
    } else {
      ret.push_back(itoa(count));
      ret.push_back(s[i - 1]);
      count = 1;
    }
  }
  ret.push_back(itoa(count));
  ret.push_back(s.back());
  return ret;
}

string decode(string s){
  int count = 0;
  string ret;
  for(int i = 0; i < s.size(); i++){
    if(isDigit(s[i])){
      count = count * 10 + s[i] -'0';
    } else {
      ret.append(count, s[i]);
      count = 0;
    }
  }
  return ret;
}
