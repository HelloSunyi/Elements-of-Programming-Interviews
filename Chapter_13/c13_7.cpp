#include <iostream>
#include <vector>

using namespace std;

void find_occurences(vector<char> V) {
  vector<int> times(256, 0);
  for (int i = 0; i < V.size(); i++) {
    times[256]++;
  }
  for (int i = 0; i < 256; i++) {
    if (times[i])
      cout << i + "" << times[i] <<endl;
  }
}
