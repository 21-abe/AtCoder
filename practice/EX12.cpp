#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int i = 0;
  int count = 0;
  int count2 = 0;

  for (i = 0; i<S.size(); i++){
    if (S.at(i) == '+'){
      count ++;
    }
    else if (S.at(i) == '-'){
      count2 ++;
    }
  }
  cout << 1 + count - count2 << endl;
}
