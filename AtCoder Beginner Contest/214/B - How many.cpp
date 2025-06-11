#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, T;
  cin >> S >> T;
  int cnt = 0;
  for (int i = 0; i < S+1; i++){
    for (int j = 0; j < S+1; j ++){
      for (int k = 0; k < S+1; k++){
        if (((i+j+k) <= S) && ((i*j*k) <= T)) cnt ++;
      }
    }
  }
  cout << cnt << endl;
}