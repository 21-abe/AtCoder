#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,N;
    cin >> T >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
      cin >> A.at(i);
    }
    int M;
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; i++){
      cin >> B.at(i);
    }
    int count = 0;
    int flag = 0;
    for(int j = 0; j < M; j++){
      for(int i = flag; i < N; i++){
        if(((B.at(j)-A.at(i)) <= T) && ((B.at(j)-A.at(i)) >= 0)){
          count ++;
          flag = j+1;
          break;
        }
      }
    }
    if (count == M){
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
}