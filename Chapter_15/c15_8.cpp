class Solution {
    public:
            void calleft(vector<int> data, int i, int j, vector<int> &left) {
                        if (i == 0 || j == -1) {
                                         left[i] = -1;
                                                      return;
                                                               }
                                if (data[i] == data[j]) {
                                                    left[i] = left[j];
                                                            } 
                                        else if (data[i] > data[j]) {
                                                            left[i] = j;
                                                                    } 
                                                else {
                                                            calleft(data, i, left[j], left);
                                                                }
            }

                void calright(vector<int> data, int lengh, int i, int j, vector<int> &right) {
                            if (i == lengh-1 || j == lengh) {
                                             right[i] = lengh;
                                                          return;
                                                                   }
                                    if (data[i] == data[j]) {
                                                        right[i] = right[j];
                                                                } 
                                            else if (data[i] > data[j]) {
                                                                right[i] = j;
                                                                        } 
                                                    else {
                                                                calright(data, lengh, i, right[j], right);
                                                                    }
                }
                    
                int largestRectangleArea(vector<int>& height) {
                        
                        int length = height.size();
                            if (length == 0) return 0;

                                vector<int> left(length,0);
                                    vector<int> right(length,0);
                                        for (int i=0; i<length; i++) {
                                                    calleft(height, i, i-1, left);
                                                        }
                                            for (int i=0; i<length; i++) {
                                                        calright(height, length, length-1-i, length-i, right);
                                                            }

                                                int res = 0;
                                                    for(int i=0; i<length; i++) {
                                                                int area = (right[i]-left[i]-1) * height[i];
                                                                        if (area > res) {
                                                                                        res = area;
                                                                                                }
                                                                            }

                                                        return res;
                }

};
