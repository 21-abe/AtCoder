#include <bits/stdc++.h>
using namespace std;

int main() {
  int Deg, a;
  double Dis, b;
  int count = 0;
  vector<string> Dir = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
  vector<double> W = {0.25, 1.55, 3.35, 5.45, 7.95, 10.75, 13.85, 17.15, 20.75, 24.45, 28.45, 32.65};
  
  cin >> Deg >> Dis;
  a = (Deg + 112.5)/ 225 ;
  b = Dis / 60;
  for (int i =0; i < 12; i++){
    if (b >= W.at(i)){
      count ++;
    }
    else{
      break;
    }
  }
  if (b <= 0.2){
    cout << "C" << " " << count << endl;
  }
  else{
    cout << Dir.at(a) << " " << count << endl;
  }
}