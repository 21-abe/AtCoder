#include <bits/stdc++.h>
using namespace std;

int main() {
  double R;
  cin >> R;
  int N = R;
  if ((R-N)*10 < 3) cout << N << '-';
  else if ((R-N)*10 < 7) cout << N;
  else cout << N << '+';
  return 0;
}