#include <iostream>
#include <vector>

int find_cap(const vector<int> & h){
  int min_h = INT_MAX;
  int capcity = 0;
  for(int = 0; i < h.size(); i++){
    capcity = max(capcity, h[i] - min_h);
    min_h = min(min_h, h[i]);
  }
  return capcity;
}
