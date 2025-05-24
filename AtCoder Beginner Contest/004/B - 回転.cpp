#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<string>> rot(4, vector<string>(4));
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      cin >> rot.at(i).at(j);
    }
  }
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (j == 3){
        cout << rot.at(3-i).at(3-j);
      }
      else{
        cout << rot.at(3-i).at(3-j) << ' ';
      }
    }
    cout << endl;
  }
}