#include <iostream>
#include <stack>

using namespace std;

void move(int n, int from, int to, int helper) {
  if (n == 1) {
    cout << "move 1 from" << from << "to" << to << end;
    return
  }
  move(n-1, from, helper, to);
  count << "move n from" << from << "to" << to << end;
  move(n-1, helper, to, from);
}
