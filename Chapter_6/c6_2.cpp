#include <iostream>
#include <stdio>

vector<int> S(n);
vector<int> A(n);
vector<int> P(n);
int t = 0;
bool isValid(int i) {
  return 0 <= P[i] && P[i] < t && S[P[i]] == i;
}
bool read(int i, int &value){
  if (isValid(i)) {
    value = A[i];
    return true;
  }
  return false;
}

void write(int i, int value) {
  if (!isValid) {
    S[t] = i;
    P[i] = t;
    t++;
  }
  A[i] = value;
}
