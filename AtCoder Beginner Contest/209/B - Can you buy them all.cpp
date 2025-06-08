#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, count = 0;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  } 
  for (int i = 0; i < N; i++){
    if (i % 2 == 1) A.at(i) = A.at(i) - 1;
  } 
  for (int i = 0; i < N; i++){
    count += A.at(i);
  }
  if (count <= X) cout << "Yes" << endl;
  else cout << "No" << endl;
}