#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;
  vector<string> check = {"0123", "1234", "2345", "3456", "4567", "5678", "6789" ,"7890", "8901", "9012", "0000", "1111", "2222", "3333", "4444", "5555", "6666", "7777", "8888", "9999"};
  bool ans = true;
  for (int i = 0; i < 20; i++){
    if (X == check.at(i)) ans = false;
  }
  if(ans) cout << "Strong";
  else cout << "Weak";
  return 0;
}