#include <iostream>
using namespace std;

string compress(const string & s) {
  string s2;
  int counter = 0;
  for(size_t i = 1; i < s.length(); i++) {
    if(s[i] == s[i-1]) counter++;
    else {
      s2 += s[i-1];
      if(counter != 0) s2 += to_string(counter + 1);
      counter = 0;
    }
  }
  s2 += s[s.length() -1];
  if(counter != 0) s2 += to_string(counter + 1);
  if(s.length() == s2.length()) return s;
  return s2;
}
int main() {
  string str = "aabbccc";
  cout << compress(str);
}
