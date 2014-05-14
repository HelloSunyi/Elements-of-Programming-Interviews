#include <iostream>
#include <string>
#include <vector>

int production(string s1, string s2){
  if(s1.size() == 0 || s2.size() == 0)
    return 0;
  int l1 = s1.size();
  int l2 = s2.size();
  vector ret(l1 + l2, 0);
  for(int i = l1 - 1; i >= 0; i--){
    for(int j = l2 - 1; j >= 0; j--){
      ret[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
    }
  }
  int carry = 0;
  for( int i = l1 + l2 -1; i >= 0; i--){
    tmp = ret[i];
    ret[i] = (tmp + carry) % 10;
    carry = (tmp + carry) /10;
  }
  
  int index = 0;
  while(ret[index++] == 0);
  long long res = 0;
  for(; index < ret.size(); index++){
    res += res * 10 + ret[index];
    if(res >= INT_MAX)
      return res;
  }
  return res;
}
