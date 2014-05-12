#include <iostream>
#include <vector>

void swap(const vector<int> &array, int i, int j){
  int tmp = array[i];
  array[i] = array[j];
  array[j] = tmp;
}
vector<int> partition(const vector<int> &array, int key){
  int lessI = -1;
  int greaterI = array.size();
  int index = 0;
  while(index < array.size() && lessI < greaterI){
    if(array[i] < key){
      lessI++;
      swap(array, lessI, i);
    } else if(array[i] > key){
      greaterI--;
      swap(array, greaterI, i);
      i--;
    }
  }
}
