#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int i,j,k,ave=0;
  vector<int> score(N);

  for (i=0; i<N; i++){
    cin >> score.at(i);
  }
  
  for (j=0; j<N; j++){
    ave += score.at(j);
  }
  
  ave /= N;
  for (k=0; k<N; k++){
    cout << abs(score.at(k)-ave) << endl;
  }
  
  
}
