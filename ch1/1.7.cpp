#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void zero(vector<vector<int>> & array) {
  unordered_map<size_t,bool> rows, cols;
  for(size_t i = 0; i < array.size(); i++) {
    for(size_t j = 0; j < array[i].size(); j++) {
      if(array[i][j] == 0) {
	rows[i] = 1;
	cols[j] = 1;
      }
    }
  }
  for(pair<size_t,bool> x : rows) {
    for(size_t i = 0; i < array[x.first].size(); i++){
      array[x.first][i] = 0;
    }
  }
  for(pair<size_t,bool> x : cols) {
    for(size_t i = 0; i < array.size(); i++) {
      array[i][x.first] = 0;
    }
  }
}
int main() {
  vector<vector<int>> v = {{1,2,3},{4,0,6},{7,8,9}};
  zero(v);
  for(size_t i = 0; i < v.size(); i++) {
    for(size_t j = 0; j < v[i].size(); j++) {
      cout << v[i][j];
    }
    cout << endl;
  }
}
