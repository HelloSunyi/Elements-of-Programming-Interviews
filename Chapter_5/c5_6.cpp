#include <stdio>
#incldue <string>

string intToString(int x){
  bool isNeg;
  if(x<0){
    x = -x;
    isNeg = true;
  }
  else if (x>0)
    isNeg = false;
  else
    return "0";
  string res = "";
  while(x){
    res.push_back(x%10 + '0');
    x/=x;
  }
  if(isNeg)
    res.push_back('-');
  reverse(res.begin(), res.end());
  return res;
}

int stringToInt(const string &s){
  if(s == "-" || s == "+")
    return INT_MIN; //Invalid value
  bool isNeg;
  int index = 0;
  if(s[0] == '-'){
    isNeg = 1;
    index++;
  } else if(s[0] == '+'){
    isNeg = 0;
    index++;
  }
  int res = 0;
  while(index < s.size()){
    if(!isDigit(s[index]))
      return INT_MIN;
    res = res*10 + s[index] - '0';
    index++;
  }
  return isNeg? -x : x;
}
