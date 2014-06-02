#include <iostream>
#include <stack>
#include <string>
using namespace std;

string shorten_path(string s) {
  if (s.size() == 0)
    return "";
  int i = 0;
  stack<string> path;
  if (s[i] != '/')
    return "";
  while (i < s.size()) {
    while (i < s.size() && s[i] == '/')
      i++;
    int start = i;
    while (i < s.size() && s[i] != '/')
     i++;
    int end = i;
    string tmp = s.substr(start, end - start);
    if (tmp == "..") {
      if (!path.empty()) {
        path.pop(); 
      }
    } else if (tmp == ".")
      continue;
    else {
      path.push(tmp);
    }
  }
  string res = "/";
  while (!path.empty()) {
    string tmp = path.top();
    path.pop();
    res = "/" + tmp + res;
  }
}
