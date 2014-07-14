#include <iostream>
#include <vector>

using namespace std;

bool expression(vector<int> a, vector<char>& op, int i, int k) {
  if (i == a.size() - 1) {
    if (k == compute(a, op)) {
      return true;
    }
  }
  op.push_back('+');
  if (expression(a, op, i+1, k)) {
    return true;
  }
  op.pop_back();
  op.push_back('*');
  if (expression(a, op, i+1, k)){
    return true;
  }
  op.pop_back();
  return false;
}

int computer(vector<int> a, vector<int> op) {
  // 1. RPN conversion: in-fix to surfix notation tranfer.
  // 2. RPN computation: use stack
}
