#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  int i=0;
  cin >> N >> A;
  for (i=1; i<N+1; i++){
    int B;
    string op;
    cin >> op >> B;
    if (op == "+"){
      A = A + B;
    }
    else if (op == "-"){
      A = A - B;
    }
    else if (op == "*"){
      A = A * B;
    }
    else if (op == "/"){
      if (B == 0){
        cout << "error" << endl;
        break;
      }
      A = A / B;
    }
    cout << i << ":" << A << endl;
  }
}
