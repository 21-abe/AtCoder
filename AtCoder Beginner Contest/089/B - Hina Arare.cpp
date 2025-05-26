#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<char> S(N);
    for (int i = 0; i < N; i++){
      cin >> S.at(i);
    }
    if (count(S.begin(), S.end(), 'Y') > 0){
      cout << "Four" << endl;
    }
    else{
      cout << "Three" << endl;
    }
}