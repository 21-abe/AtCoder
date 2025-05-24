#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> sort = {1,2,3,4,5,6};
  int N, N_real, x, tmp;
  cin >> N;
  N_real = N % 30;
  for (int i=0; i<N_real; i++){
    x = i % 5;
    tmp = sort.at(x);
    sort.at(x) = sort.at(x+1);
    sort.at(x+1) = tmp;
  }
  for (int i = 0; i < 6; i++){
    cout << sort.at(i);
  }
  cout << endl;
}