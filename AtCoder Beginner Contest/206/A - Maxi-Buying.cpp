#include <bits/stdc++.h>
using namespace std;

int main() {
  double N;
  cin >> N;
  int yen;
  yen = N * 1.08;
  if (yen < 206) cout << "Yay!" << endl;
  else if (yen == 206) cout << "so-so" << endl;
  else cout << ":(" << endl;
}
