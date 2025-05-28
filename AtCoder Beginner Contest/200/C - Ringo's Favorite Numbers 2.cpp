#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A(N);
  vector<long long> B(200,0);
  for (long long i = 0; i < N; i++){
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++){
    B.at(A.at(i)%200) ++;
  }
  long long count = 0;
  for (int i = 0; i < 200; i++){
    count = count + (B.at(i)*(B.at(i)-1))/2;
  }
  cout << count << endl;
}