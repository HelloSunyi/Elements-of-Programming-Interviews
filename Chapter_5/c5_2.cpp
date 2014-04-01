#include <iostream>
using namespace std;

unsigned long long swap(unsigned long long x, unsigned int i, unsigned int j){
  if(x >> i != x >> j)
    return x ^ = (1L << i) | (1L << j);
  return x;
}
