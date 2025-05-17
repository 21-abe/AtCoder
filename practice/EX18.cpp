#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> table(N,vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      table.at(i).at(j) = '-';
    }
  }
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < M; k++){
        table.at(A.at(k)-1).at(B.at(k)-1) = 'o';
        table.at(B.at(k)-1).at(A.at(k)-1) = 'x';
      }
    }
  }
  
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N-1){
        cout << endl;
      }
      else{
        cout << " ";
      }
    }
  }
}
