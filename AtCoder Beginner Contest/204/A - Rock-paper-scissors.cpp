#include <bits/stdc++.h>
using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  vector<int> z = {0,1,2};
  for(int i = 0; i < 3; i++){
    if ((x+y+z.at(i)) % 3 == 0) cout << z.at(i);
  }
}