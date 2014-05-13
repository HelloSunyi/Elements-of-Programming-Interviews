#include <iostream>
#include <vector>

vector<int> sampling_k (int k){
  int tmp;
  vector<int> res;
  for(int i = 0; i < k; i++){
    cin >> tmp;
    res.push_back(tmp);
  }

  int num = k;
  while(cin >> tmp){
    int gen = random(0, num++);
    if(gen < k)
      res[gen] = tmp;
  }
  return res;
}
