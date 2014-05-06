#include <stdio>
#include <string>

string baseConvertion(const string &s, int b1, int b2){
  int index = 0;
  bool isNeg;
  if(s[0] == '-'){
    isNeg = true;
    index++;
  }
  stirng res = "";
  int tmp = 0;
  while(index < s.size()){
    tmp = tmp * b1 + isDigit(s[index]) ? (s[index] - '0') : (s[index] - 'A' + 10);
    index++;
  }
  while(tmp){
    if(tmp%b2 >= 10)
      res.push_back(tmp%b2 - 10 + 'A');
    else
      res.push_back(tmp%b2 + '0')
    tmp = tmp/b2;
  }
  if(isNeg)
    res.push_back('-');
  reverse(res.begin(), res.end());
  return res;
}
