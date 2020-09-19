#include <iostream>
#include <unordered_map>
using namespace std;

bool allUnique(const string & s) {
  unordered_map<char,int> m;
  for(char x : s){
    if(m[x] == 1) return false;
    m[x] = 1;
  }
  return true;
}
int main() {
  string str = "abcc";
  cout << allUnique(str);
}
