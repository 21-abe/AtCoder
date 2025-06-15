#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<char> magic(120, 'c');
  for (int i = 0; i < 120; i++){
    if (N == 0) break;
    else if ((N % 2) == 1){
      N = N - 1;
      magic.at(i) = 'A';
    }
    else{
      N = N / 2;
      magic.at(i) = 'B';
    }
  }
  for (int i = 119; i > -1; i--){
    if (magic.at(i) != 'c') cout << magic.at(i);
  }
  return 0;
}