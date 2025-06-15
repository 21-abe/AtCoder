#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Q;
  cin >> N >> Q;
  vector<int> box(N,0),X(Q);
  for (auto& x : X) cin >> x;
  for (int i = 0; i < Q; i++){
    int place;
    if(X.at(i) > 0){
      box.at(X.at(i) - 1) += 1;
      cout << X.at(i) << " ";
    }
    else {
      int min = *min_element(begin(box), end(box));
      for (int i = 0; i < N; i++){
        if (box.at(i) == min){
          place = i;
          break;
        }
      }
      box.at(place) += 1;
      cout << (place + 1) << " ";
    }
    /*for (int i = 0; i < N; i++){
      cout << box.at(i) << " ";
    } 
    cout << " " << endl;*/
  }
  return 0;
}