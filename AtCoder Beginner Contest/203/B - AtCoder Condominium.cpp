#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int res = 0;
  for (int i = 1; i < N+1; i++){
    for (int j = 1; j < K+1; j++){
      res += i*100+j;
    }
  }
  cout << res << endl;
}