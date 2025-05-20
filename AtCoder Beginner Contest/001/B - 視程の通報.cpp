#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  if (m < 0.1*1000){
    cout << 0 << 0 << endl;
  }
  else if ((m >= 0.1*1000) && (m <= 5*1000)){
    if  (m < 1000) {
      cout << 0 <<  m / 100 << endl;
    }
    else {
      cout << m / 100 << endl;
    }
  }
  else if ((m >= 6*1000) && (m <= 30*1000)){
    cout << m / 1000 + 50 << endl;
  }
  else if ((m >= 35*1000) && (m <= 70*1000)){
    cout << (m / 1000 - 30)/5 + 80 << endl;
  }
  else if (m > 70*1000){
    cout << 89 << endl;
  }
}