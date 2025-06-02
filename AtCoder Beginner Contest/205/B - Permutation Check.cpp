#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  bool Ans = true;
  for (int i = 0; i < N; i++) cin >> A.at(i);
  sort(A.begin(), A.end());
  for (int i = 0; i < N; i ++){
    if (count(A.begin(), A.end(), i+1) == 1){
      continue;
    }
    else if (count(A.begin(), A.end(), i+1) != 1){
      Ans = false;
      break;
    }
  }
  if (Ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}
