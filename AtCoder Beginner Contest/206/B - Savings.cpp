#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int day = 0;
  for (int i = 1; i < N+1; i++){
    if ((N > (i-1)*i/2) && (N <= i*(i+1)/2)){
      day = i;
      break;
    }
  }
  cout << day << endl;
}

