#include <iostream>
#include <bitset>

using namespace std;

int fins_missing_integer(vector<int> v) {
  vector<int> count(1 << 16, 0);
  for (int i = 0; i < V.size(); i++) {
    count[V[i] >> 16]++;
  }
  for (int i = 0; i < count.size(); i++) {
    if (count[i] < 1 << 16){
      bitset<1 << 16> bits;
      for (int j = 0; j  < V.size(); j++) {
        if (V[j] >> 16 == i)
          bits.set(V[j] && (1 << 16 - 1));
      }
    }
    for (int j = 0; j < 1 << 16; j++) {
      if (bits.test(j) == 0)
	return i << 16 | j;
    }
  }
}
