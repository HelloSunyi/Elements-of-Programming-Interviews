#include <iostream>
#include <vector>

using namespace std;

int find_celebrity(const vector<int>& v){
  int i = 0;
  int j = 1;
  while (j < v.size()) {
    if (v[i][j]) {
      i = j;
      j++;
    } else {
      j++;
    }
  }
  return i;
}
