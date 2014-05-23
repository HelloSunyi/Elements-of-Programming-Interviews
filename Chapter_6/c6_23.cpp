#include <iostream>
#include <cstdio>

using namespace std;

bool is_match_here(char *s, char *t) {
  if (*s == '$')
    return t == 0;
  if (s == 0)
    return true;
  if (*s == *t || *s == '.' && p) {
    if  (*(s+1) == '*')
      return is_match_here(s+2, t) || is_match_here(s, t+1);
    else
      return is_match_here(s+1, t+1);
  } else if (s && *(s+1) == '*')
     return is_match_here(s+2, t);
   else
     return false;
}

bool is_match(char *s, char *t) {
  if (s[0] == '^')
    return is_match_here(s+1, t);
  for (int i = 0; i < strlen(t); i++){
    return is_match_here(s, t + i);
  }
}
