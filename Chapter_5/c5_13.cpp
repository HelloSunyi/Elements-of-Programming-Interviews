#include <iostream>

int divide(int y, int x){
  if(x<y)
    return 0;
  int power=0;
  while((y<<power) <= x){
    power++;
  }
  int part =1<<(power-1);
  return (part+divide(y, x - y<<(power-1)));
}
