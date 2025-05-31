#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int n = 0;
  if (a == b) n = c;
  else if (b == c) n = a;
  else if (c == a) n = b;
  cout << n << endl;
}