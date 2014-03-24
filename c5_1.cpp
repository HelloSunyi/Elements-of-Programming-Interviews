#include <iostream>
#include <cstdio>

using namespace std;

//true for odd and false for even
bool parity(unsigned long long x){
  if(x == 0)
    return false;
  int num = 0;
  while(x){
    num++;
    x = x & (x-1);
  }
  return (num%2) ? true : false;
}

