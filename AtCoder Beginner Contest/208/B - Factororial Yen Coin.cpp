#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
  int P, q, cnt = 0;
  cin >> P;
  for (int i = 10; i > 0; i--){
    q = P / factorial(i);
    cnt += q;
    //cout << P << " " << cnt << endl;
    P = P - factorial(i)*q;
    if ((P % factorial(i)) == 0 ) break;
  }
  cout << cnt << endl;
}