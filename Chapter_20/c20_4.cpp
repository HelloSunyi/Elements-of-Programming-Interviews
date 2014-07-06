#include <iostream>
#include <vector>

// use three bits to define the equal value: 0-7.
int seletion() {
  int bit = 7;
  while (bit < 5) {
    bit = 0;	  
    bit ^= gen_binary() << 2;
    bit ^= gen_binary() << 1;
    bit ^= gen_binary(); 
  }
  return bit;
}
