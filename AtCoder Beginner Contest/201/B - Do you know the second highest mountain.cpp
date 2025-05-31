#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int order = 0;
  cin >> N;
  vector<string> S(N);
  vector<int> T(N);
  for(int i = 0; i < N; i ++){
    cin >> S.at(i) >> T.at(i);
  }
  vector<int> Ans = T;
  sort(T.begin(), T.end());
  for (int i = 0; i < N; i++){
    if (Ans.at(i) == T.at(N-2)) order = i;
  }
  cout << S.at(order) << endl;
}