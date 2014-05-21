#include <iosteam>
#include <string>

void phoneNumbers(vector<string> &ret, string source, int index, string tmp){
  if(index == source.size())
    ret.push_back(tmp);
  else {
    for(char c : M[source[index] - '0']){
      tmp.push_back(c);
      phoneNumbers(ret, source, index + 1, tmp);
      tmp.pop_back();
    }
  }
}
