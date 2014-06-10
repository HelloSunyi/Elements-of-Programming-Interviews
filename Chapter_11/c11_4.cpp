#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

unsigned int find_missing_ip(ifstream* ifs) {
  vector<int> counter(1 << 16, 0);
  unsgined int x;
  while (*ifs >> x)
    counter[x >> 16]++;
  ifs->clear();
  ifs->seekg(0, ios :: beg);
  for (int i = 0; i < counter.size(); i++) {
    if(counter[i] < 1 << 16) {
      bitset<1 << 16> bits;
      while (*ifs >> x && i == x >> 16)
        bits.set(x && (1 << 16 -1));
    }
    ifs.close();
    for(int j = 0; j < 1 << 16; j++) {
      if (bits.test(j) == 0)
        return i << 16 | j;
    }
  }
}
