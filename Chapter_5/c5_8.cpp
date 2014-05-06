#include <iostream>
#include <string>

int IDConvert(const string &s){
  int res = 0;
  for(int i = 0; i < s.size(); i++){
     if(s[index] <'A' || s[index] > 'Z')
       return 0;
     res = res*26 + s[i] - 'A' + 1;
  }
 return res;
}
