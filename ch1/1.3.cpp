#include <iostream>
#include <unordered_map>
using namespace std;

bool isPermutation(const string & s1, const string & s2) {
  if(s1.length() != s2.length()) return false;
  unordered_map<char,int> m1, m2;
  for(char x : s1) m1[x]++;
  for(char x : s2) m2[x]++;
  for(pair<char,int> x : m1) {
    if(m2[x.first] != x.second) return false;
  }
  return true;
}
int main() {
  string str1 = "bca";
  string str2 = "cba";
  cout << isPermutation(str1,str2);
}
