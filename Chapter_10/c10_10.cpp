#include <iostream>
#include <vector>

using namespace std;

// time complexity is O(2k)
void find_k(const vector<int>& heap, int x, int k, int index, int& large, int& equal) {
  if (index >= heap.size() || heap[index] < x)
    return;
  if (heap[index] == x) {
    equal++;
    if (equal >= k)
      return;
  } else {
    large++;
    if (large >= k)
      return;
  }
  find_k(heap, x, k, 2*index + 1, large, equal);
  find_k(heap, x, k, 2*index + 2, large, equal);
}

int compare(const vector<int>& heap, int x, int k) {
  int large = 0;
  int equal = 0;
  find_k(heap, x, k, 0, large, equal);
  return (large >= k) ? 1 : ((large + equal) >= k ? 0 : -1);
}
