#include <bits/stdc++.h>
using namespace std;


int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for (auto& x : A) cin >> x;
  for (int i = 0; i < N; i++) B.at(i) = i+1;
  vector<pair<int, int>> v;
  for (int i = 0; i < N; i++)  v.push_back({A.at(i), B.at(i)});
  sort(v.begin(), v.end());
  cout << v.at(N-2).second << endl;
}

