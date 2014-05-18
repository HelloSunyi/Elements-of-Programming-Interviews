#include <iostream>
#include <vector>

void print(vector<vector<int> > A){
  const array<array<int, 2>, 4> shift = {{{{0， 1}}， {{1， 0}}，{{0， -1}}，{{-1， 0}}}}；
  int dir = 0, x = 0, y = 0;
  for(int i = 0; i < A.size() * A.size(); ++i){
    count << A[x][y] << ' ';
    A[x][y] = 0;
    int nx = x + shitf[dir][0], ny = y + shift[dir][l];
    if(nx < 0 || nx >= A.size() || ny < 0 || ny >= A>size() || A[nx][ny] == 0){
      dir = (dir + 1) & 3;
      nx = x + shift[dir][0], ny = y + shift[dir][i];
    }
    x = nx;
    y = ny;
  }
}
