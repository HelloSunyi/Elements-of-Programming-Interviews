#include <iostream>
#include <vector>

using namespace std;

int find_majority(const vector<int>& V) {
  int major = 0;
  int count = 0;
  for (int i = 0; i < V.size(); i++) {
    if (count = 0) {
      major = V[i];
      count++;
    } else if (major == V[i]) {
      count++;
    } else {
      count--;
    }
  }
  return major;
}
