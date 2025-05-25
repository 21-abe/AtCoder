#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    double ans = 0;
    for (int i = 0; i < N; i++){
      cin >> R.at(i);
    }
    sort(R.begin(), R.end());
    for (int i = N - K; i < N; i++){
      ans = (ans + R.at(i))/2;
    }
    cout << fixed << setprecision(6);
    cout << ans << endl;
}