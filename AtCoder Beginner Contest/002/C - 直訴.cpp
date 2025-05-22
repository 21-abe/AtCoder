#include <bits/stdc++.h>
using namespace std;

int main() {
  double xa, ya, xb, yb, xc, yc, a, b, c, d, s;
  cin >> xa >> ya >> xb >> yb >> xc >> yc ;
  a = xb - xa;
  b = yb - ya;
  c = xc - xa;
  d = yc - ya;
  cout << fixed << setprecision(1);
  cout << abs(a*d-b*c)/2 << endl;
}