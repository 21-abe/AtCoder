#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> an(n);
    if (n == 1) cout << 0 << endl;
    else if (n == 2) cout << 0 << endl;
    else if (n == 3) cout << 1 << endl;
    else{
      an.at(0) = 0;
      an.at(1) = 0;
      an.at(2) = 1;
      for (int i = 3; i < n; i++){
        an.at(i) = (an.at(i-1)+an.at(i-2)+an.at(i-3)) % 10007;
      }
      cout << an.at(n-1) << endl;
    }
}