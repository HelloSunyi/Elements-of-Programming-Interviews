#include <iostream>
#include <vector>
using namespace std;

// Subsets by recursion.

void genSubSets(vector<int> &result, vector<int> &nums, int index){
  for(int i=0;i<result.size();i++)
    cout<<result[i]<<" ";
  cout<<endl;
  for(int i = index; i < nums.size(); i++){
    result.push_back(nums[i]);
    genSubSets(result, nums, i+1);
    result.pop_back();
  }
}

// Subsets by stack;
vector< vector<int>> genSubSets(vector<int> num){
  vector< vector<int>> res;
  res.push_back(vector<int>);
  int index = 0;
  while(index < num.size()){
    int size = res.size();
    for(int i = 0; i < size; i++){
      tmp = res[i];
      tmp.push_back(num[i]);
      res.push_back(tmp)
    }
   index++;
  }
  return res;
}
