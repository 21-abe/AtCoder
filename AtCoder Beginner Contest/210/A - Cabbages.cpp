#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, X, Y;
  cin >> N >> A >> X >> Y;
  if ((N-A) >= 0) cout << A*X + Y*(N-A) << endl;
  else cout << X*N << endl;
}