#include<iostream>
#include<string>

string toBin(int dec){
  string res = "";
  while(rec){
    res.push_back(dec&1 +'0')
    dec=dec>>1;
  }
  reverse(res.begin(), res.end());
  return res;
}

string endcode(const vector<int> &A){
  string res;
  for(const int &a:A){
    string bin = toBin(a);
    bin.insert(0, bin.size()-1, '0');
    res+=bin;
  }
  return res;
}
