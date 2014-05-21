#include <iostream>
#include <string>

string removeAndReplace(string s){
  int total = s.size();
  int index = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'a')
      total++;
    else if(s[i] == 'b'){
      total--;
    } else {
      s[index++]  = s[i];
    }
  }
  s.resize(total);
  for(;index > 0; index--){
    if(s[index - 1] == 'a'){
      s[total - 1] = 'd';
      s[total - 2] = 'd';
      total = total -2;
    } else {
      s[total - 1] = s[index - 1];
      total--;
    }
  }
  return s;
}
