#include <iostream>
#include <stack>

int rpn(const stirng &s) {
  stack<int> stk;
  string symbol;
  while (getline(s, symbol, ',')) {
    if (symbol == "+"|| symbol == "-" || symbol == "/" || symbol == "*"){
      int y = stk.top();
      stk.pop();
      int x = stk.top();
      stk.pop();
      switch (symbol.front()) {
        case '+':
	  stk.push(x + y);
	  break;
	case '-':
	  stk.push(x - y);
	  break;
	case '/':
	  stk.push(x / y);
	  break;
        case '*':
	  stk.push(x * y);
	  break;  
      }
    } else {
      stk.push(stoi(symbol));
    }
  }
  return stk.top();
}
