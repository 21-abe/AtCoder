#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> P(26);
  string S = "abcdefghijklmnopqrstuvwxyz";
  for (auto& x : P) cin >> x;
  for(int i = 0; i < 26; i++){
    cout << S.at(P.at(i)-1);
  }
  return 0;
}