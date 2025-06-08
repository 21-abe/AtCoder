#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string T,A;
  cin >> T;
  cin >> A;
  bool Ans = false;
  for (int i = 0; i < N; i++){
    if ((T.at(i) == A.at(i)) && (T.at(i) == 'o')) Ans = true;
  }
  if(Ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}