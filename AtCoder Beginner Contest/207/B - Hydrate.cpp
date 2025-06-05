#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  if (C*D-B > 0) cout << ceil(A/(C*D-B)) << endl;
  else cout << -1 << endl;
}
