#include <iostream>
#include <string>

void reverse(string a){
  reverse(a.begin(), a.end());
  int start = 0;
  int end = 0;
  while(end < a.end()){
    while(a[start+]!= " ");
    reverse(a.start() + start, a.start() + end);
    start = end + 1;
  }
  reverse(a.start() + start, a.end());
}
