#include <iostream>
using namespace std;

unsigned long long findY(unsigned long long x) {
  for(int i=0; i<63;i++){
    if((x>>i & 1) ^ (x>>(i+1) & 1)) {
      x ^= (1UL << i) | (1UL << (i+1))
      return x;
    }
  }
}
