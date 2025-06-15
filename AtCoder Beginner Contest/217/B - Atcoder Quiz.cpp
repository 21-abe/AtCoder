#include <bits/stdc++.h>
using namespace std;

int main() {
  string S1, S2, S3;
  cin >> S1 >> S2 >> S3;
  if ((S1 != "ABC") && (S2 != "ABC") && (S3 != "ABC")) cout << "ABC";
  else if ((S1 != "ARC") && (S2 != "ARC") && (S3 != "ARC")) cout << "ARC";
  else if ((S1 != "AGC") && (S2 != "AGC") && (S3 != "AGC")) cout << "AGC";
  else cout << "AHC";
  return 0;
}