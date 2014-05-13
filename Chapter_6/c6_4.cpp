#include <iostream>
#include <vector>

// TO be strict, i<j<m<n requirment fails if the array is ascending. For this situation, 
// the Max profit is (Max_V -Min_V) - min(Vj-Vj-1)
int max_2_value(const vector<int> &value){
  vector<int> left(value.size(), 0);
  vector<int> right(value.size(), 0);
  int maxV = 0;
  int size = value.size();
  int minLeft = value[0];
  int maxRight = value[size - 1];
  for(int i = 1; i < size; i++){
    left[i] = max(left[i-1], value[i] - minLeft);
    minLeft = min(minLeft, value[i]);
  }

  for(int i = size -2; i >= 0; i--){
    right[i] = max(right[i+1], maxRight - value[i])
    maxRight = max(maxRight, value[i]);
  }

  for(int i = 0; i < size; i++){
    maxV = max(maxV, left[i] + right[i]);
  }
}

int max_K_value_DP(const vector<int> &value, int k){
  vector<vector<int> > res(k+1, vector<int>(value.size() + 1, 0));
  for(int i = 1; i <= k; i++)
    res[i][2] = value[1] - value[0];
  for(int i = 2; i <= k; i++){
    for(int j = 2; j <= value.size(); j++){
      int maxV = INT_MIN;
      int minV = INT_MAX;
      for(int k = 2; k < j; k++){
        // get maxV[] from k to j
      res[i][j] = max(res[i][j], res[i][k] + maxV[k---j]);
      }
    }
  }
}

// Reference: http://elementsofprogramminginterviews.com/pdf/epi-light-1.4.4.pdf
int max_K_value_Optimized(const vector<int> &value, int k){
  int size = value.size();
  vector<vector<int> > sell(k+1, vector<int>(size+1, INT_MIN));
  vector<vector<int> > buy(k+1, vector<int>(size+1, INT_MIN));
  for(int i=1; i<=size; i++ ){
    buy[1][i] = -value[i-1];
    sell[1][i] = get_max_difference(value, i);
  }

  for(int i=2; i<=k; i++){
    for(int j=2; j<=size; j++){
      sell[i][j] = value[i] + find_max_buy(buy, i, j-1);
      buy[i][j] = find_max_sell(sell, i-1, j-1) - value[i];
    }
  }
  return find_max_sell(sell, k, i);
}

int max_any_K_value(const vector<int> &value){
  int buy = value[0];
  int profit = 0;
  for(int i = 1; i < value.size() - 1, i++){
    if(value[i] > value[i+1] && value[i] >i= value[i-1]){
      profit += value[i] - buy;
      buy = value[i+1];
    }
    if(value[i] <= value[i+1] && value[i] < value[i-1])
      buy = value[i]
  }
  if(value.back() > buy)
    profit += value.back() - buy;

  return profit;
}
