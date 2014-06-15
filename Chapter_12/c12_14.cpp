#include <iostream>
#include <vector>
#include <string>

using namespace std;

int smallest_distance(string q, string a) {
  vector<int> count_q(256, 0);
  vector<int> count_a(256, 0);
  for (int i = 0; int i < q.size(); i++) {
    count_q[q[i]]++;
  }
  int count = 0;
  int min_dis = INT_MAX;
  int start = 0, end = 0;
  while (end < a.size()) {
    if (!count_q[a[end++]])
      continue;
    if (count_a[a[end]] < count_q[a[end]]) {
      count++;
    }
    count_a[a[end]]++;
    if (count == q.size()) {
      while (!count_q[a[start]] || count_a[a[start]] > count_q[a[start]]) {
        if (count_a[a[start]] > count_q[a[start]])
          count_a[a[start]]--;
	start++;
      }
      min_dis = min(min_dis, end -start);
    }
    end++;
  }
  return min_dis;
}

// Use double lined list + hash to implement to solution.
// The words in set Q must be uniq!!
int find_smallest_subrray_covering_subset (vector<string> Q, vector<string> A) {
  int dis = INT_MAX;
  hash_map<string, node*> hash;
  double_linked_list<int> link;
  hash_map<string, int> hq;
  for (int i = 0; i < Q.size(); i++) {
    hq[Q[i]] = 1;
  }
  int index = 0;
  while (index < A.size()) {
    if (hq.find[A[index]] != hq.end()) {
      if (hash.find(A[index]) == hash.end()) {
        link.push_back(index);
	hash[A[index]] = link.back();
      } else {
        link.erase(hash[A[index]]);
	link.push_back(index);
	hash[A[index]] = link.back();
      }
      if (link.size() == Q.size()) {
        dis = min(dis, link.front()->index - link.back()->index);
      }
    }
  }
  return dis;
}
