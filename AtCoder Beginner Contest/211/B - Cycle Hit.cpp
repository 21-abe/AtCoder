#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(4);
  for (auto& x : S) cin >> x;
  bool ans = true;
  for(int i = 0; i < 4; i++){
    for (int j = i + 1; j < 4; j++){
      if (S.at(i) == S.at(j)){
        ans = false;
        break;
      }
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}