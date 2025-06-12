#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  long long pow = 1, cnt = -1;
  for (int i = 0; i < 1000; i++){
    if (pow <= N){
      pow = pow * 2;
      cnt ++;
    }
    else break;
  }
  cout << cnt << endl;
}