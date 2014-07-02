#include <iostream>
#include <string>

using namespace std;

string strc(string s, int f) {
  string rest = s;
  if (f) { //even length
    for (int i = 0; i < s.size(); i++) {
      ret += i.size() - i - 1;
    }
  } else {
    for (int i = 0; i < s.size(); i++) {
      ret +=i.size() - i -2;
    }
  }
  return ret;
}

int search(int p) {
  string ps = itoa(p);
  string left = lefthalf(ps);
  string leftp = strc(left, !ps.size()&1);
  string newp = left;
  int index = (ps.size() - 1) / 2;
  if (atoi(leftp) > x) {
    while(index >= 0) {
      if (newp[index] == '0') {
        newp[index--] = '9';
      } else {
        newp[index]--;
        break;
      }
    }
  } else {
    while(index >= 0) {
      if (newp[index] == '9') {
        newp[index--] = '0';
      } else {
        newp[index]++;
        break;
      }
    }
  }
  // should consider when newp = "99999" or "100000"
  string pp = strc(newp, !ps.size()&1);
  return (abs(atoi(leftp) - p) - abs(atoi(pp) - ) > 0) ? pp : leftp;
}
