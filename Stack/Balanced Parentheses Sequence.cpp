#include <iostream>
#include <stack>
using namespace std;
char opening(char c) { // get opening bracket of same type
  if (c == ')') return '(';
  if (c == ']') return '[';
  if (c == '}') return '{';
}

bool is_opening(char c){ 
  return c == '(' || c == '[' || c == '{';
}

bool is_closing(char c) {
  return !is_opening(c);
}


string is_balanced(string s) {
  int N = s.size();
  stack<char> S;

  for (int i = 0; i < N ;i ++) {
    if (is_opening(s[i]))
      S.push(s[i]);
    else {
      if (S.empty())
        return "No\n"; // Looking for opening brakcet but stack it empty => Not balanced
      char c = S.top(); 

      if (c != opening(s[i]))  // top is not mathcing!
        return "No\n";
      
      S.pop(); // top matched, remove from stack
    }
  } 

  return "Yes\n"; //Nothing went wrong, all brackets matched
}

int main() {
  cout<<is_balanced("[()]{}{[()()]()}");
  cout<<is_balanced("]]");
  cout<<is_balanced("[(){[]({})}]");
  cout<<is_balanced("[(){[)({})}]");
  return 0;
}