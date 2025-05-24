#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> sort = {1,2,3,4,5,6};
  int N, x, tmp1, tmp2;
  cin >> N;
  for (int i=0; i<N; i++){
    x = i % 5;
    tmp1 = sort.at(x);
    tmp2 = sort.at(x+1);
    sort.at(x) = tmp2;
    sort.at(x+1) = tmp1;
  }
  for (int i = 0; i < 6; i++){
    cout << sort.at(i);
  }
  cout << endl;
}