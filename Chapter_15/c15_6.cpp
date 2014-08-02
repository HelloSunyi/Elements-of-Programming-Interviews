#include <vecotr>
#include <iostream>

using namespace std;

int lis(vector<int> v) {
  vector<int> length(v.size(), 1);
  int ret = 0;
  for (int i = 1; i < v.size(); i++) {
    for (int j = 0; j < i; j++) {
      if (v[i] >= v[j] && length[j] + 1 > length[i]) {
        length[i] = length[j] + 1;
	ret = max(ret, length[i]);
      }
    }
  }
}
