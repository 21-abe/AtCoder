#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  bool ans = false;
  vector <string> S(N), T(N);
  for (int i = 0; i < N; i++){
    cin >> S.at(i) >> T.at(i);
  } 
  for (int i = 0; i < N; i++){
    for (int j = i + 1; j < N; j++){
      if((S.at(i) == S.at(j)) && (T.at(i) == T.at(j))){
        ans = true;
        break;
      }
    }
  }
  if(ans) cout << "Yes";
  else cout << "No";
  return 0;
}