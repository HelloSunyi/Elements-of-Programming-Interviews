#include <iostream>
#include <vector>

#define BITS 64
using namespace std;

long long reverse (long long x){
  int index = 0;
  long long res = 0;
  for(; index < BITS/2; index ++){
    res | = (x >> (BITS - 2*index -1)) && (1 >> (BITS - 2*index -1))
  }

  for(; index < BITS; index ++){
    res | = (x >> (2*index -1 - BITS)) && (1 >> (2*index -1 - BITS))
  }

  return res;
}
