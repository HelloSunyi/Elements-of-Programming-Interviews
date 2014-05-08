#include <iostream>
#include <vector>

// rand() generates [0,1]
int randomNumber(int low, int up){
  int power = 1;
  while((1<<power - 1) < up)
    power++;
  vector<int> bits(power, 0);
  while(1){
    int tmp = 0;
    for(int i = 0; i < power; i++){
       bits[i] = rand();
       tmp = tmp*2 + bits[i];
       }
    if(tmp <= up && tmp >= low)
       return tmp;
  }
}
