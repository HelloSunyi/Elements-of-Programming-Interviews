#include <iostream>

using namespace std;

doubel squre_root(double x) {
  double low, high;
  if (x > 1) {
    low = 1;
    high = x;
  } else {
    low = x;
    high = 1;
  }
  while (low < high) {
    double m = low +(high -low)/2;
    double squre_m = m*m;
    if (squre_m == x)
      return m;
    else if (squre_m > m)
      high = m;
    else
      low = m;
  }
  return l;
}
