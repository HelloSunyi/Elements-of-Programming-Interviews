#include <iostrea>
#include <queue>

bool compare(pair<int, int> lhs, pair<int, int> rhs) {
  return lhs.first < rhs.first;
}

int s_order = INT_MIN;
int q_order = INT_MAX;
priority_queue<pair<int, int>, vector<pair<int, int>>, compare> max_heap;

void s_push(int a) {
  heap.push(pair<s_order++, a);
}

int s_pop() {
  pair<int, int> t = heap.front();
  heap.pop();
  return t.second;
}

int s_peak() {
  return heap.front().second();
}

void q_push(int a) {
  heap.push(pair<q_order--, a);
}

int q_pop() {
  pair<int, int> t = heap.front();
  heap.pop();
  return t.second();
}

int q_peak() {
  return heap.front().second;
}
