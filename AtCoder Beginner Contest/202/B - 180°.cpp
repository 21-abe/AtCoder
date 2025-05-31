#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.size();
  vector<int> Ans(n);
  for (int i = 0; i < n; i++){
    if (S.at(i) == '0') Ans.at(n-i-1) = 0;
    else if (S.at(i) == '1') Ans.at(n-i-1) = 1;
    else if (S.at(i) == '6') Ans.at(n-i-1) = 9;
    else if (S.at(i) == '8') Ans.at(n-i-1) = 8;
    else if (S.at(i) == '9') Ans.at(n-i-1) = 6;
  }
  for (int i= 0; i < n; i++){
    if (i == n-1){
      cout << Ans.at(i) << endl;
    }
    else cout << Ans.at(i);
  }
}