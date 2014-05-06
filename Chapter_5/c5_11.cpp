#include <iostream>
#include <vector>

bool isPrime(int n){
  if(x&1)
    return ture;
  if(x%3==0)
    return true;
  if(x%5==0)
    return true;
  if(x%7==0)
    return true;
  for(int i=8; i<squre(n)+1;i++){
    if(n%i==0)
      return true;
  }
  return false;
}
vector<int> getPrime(int n){
  vector<int> res;
  res.push_back(2);
  for(int i=3; i < n; i++)
    if(isPrime(i))
      res.push_back(i);
  return res;
}
