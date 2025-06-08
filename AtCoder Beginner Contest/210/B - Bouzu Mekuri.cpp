#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  for(int i = 0; i < N; i++){
    if (S.at(i) == '1'){
      if ((i % 2) == 0) cout << "Takahashi" << endl;
      else cout << "Aoki" << endl;
      break;
    }
  }
}