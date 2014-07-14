#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Recursion + Memorization
map<pari<int, int> > m; // hash for false cases, because the major is false!
pair<int, int> A, B, C;

bool check_feasible(int L, int H) {
  if (L > H || m.find(L, H) != m.end() || L < 0 && H < 0) {
    return false;
  }
  if (L <= A.first() && A.second() <= H || check_feasible(L - A.first(), H - A.second())) {
    return true;
  }
  if (L <= B.first() && B.second() <= H || check_feasible(L - B.first(), H - B.second())) {
    return true;
  }
  if (L <= C.first() && C.second() <= H || check_feasible(L - C.first(), H - C.second())) {
    return true;
  }  
  m.push(L, H);
  return false;
} 
