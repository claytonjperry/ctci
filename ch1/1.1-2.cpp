#include <iostream>
using namespace std;

bool allUnique(const string & s) {
  unsigned long long array = 0;
  for(char x : s){
    if((array & (1 << x)) != 0) return false;
    array |= 1 << x;
  }
  return true;
}
int main() {
  string str = "not";
  cout << allUnique(str);
}
