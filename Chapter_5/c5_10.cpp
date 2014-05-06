#include <iostream>
#include <string>

long long gcd(long long x, long long y){
  if(x==0)
    return y;
  else if(y==0)
    return x;
  else if((x&1) && (y&1))
    return gcd(x>>1, y>>1)<<1;
  else if((x&1) && !(y&1))
    return gcd(x>>1, y);
  else if(!(x&1) && (y&1))
    return gcd(x, y>>1);
  else if(x>y)
    return gcd(x-y, y);
  else
    return gcd(x, y-x);
}
