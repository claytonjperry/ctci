#include <iostream>
#include <unordered_map>
using namespace std;

void reverse(string & s) {
  for(size_t i = 0; i < s.length() / 2; i++) {
    swap(s[i],s[s.length() - i - 1]);
  }
}
int main() {
  string str = "dcba";
  reverse(str);
  cout << str;
}
