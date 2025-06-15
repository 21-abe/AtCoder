#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,Ans=0;
  cin >> N;
  vector<int> A(N);
  for (auto& x : A) cin >> x;
  cin >> K;
  for(int i = 0; i < N; i++){
    if (A.at(i) >= K) Ans ++;
  }
  cout << Ans << endl;
}