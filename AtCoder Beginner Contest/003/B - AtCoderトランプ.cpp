#include <bits/stdc++.h>
using namespace std;

int main() {
  bool ans = true;
  string S,T;
  cin >> S;
  cin >> T;
  int n = S.size();
  for (int i=0; i<n; i++){
    if ((S.at(i) != T.at(i))&&(S.at(i) == '@')){
      if((T.at(i) != 'a')&&(T.at(i) != 't')&&(T.at(i) != 'c')&&(T.at(i) != 'o')&&(T.at(i) != 'd')&&(T.at(i) != 'e')&&(T.at(i) != 'r')){
        ans = false;
      }
    }
    else if ((S.at(i) != T.at(i))&&(T.at(i) == '@')){
      if((S.at(i) != 'a')&&(S.at(i) != 't')&&(S.at(i) != 'c')&&(S.at(i) != 'o')&&(S.at(i) != 'd')&&(S.at(i) != 'e')&&(S.at(i) != 'r')){
        ans = false;
      }
    }
    else if ((S.at(i) != T.at(i))&&(S.at(i) != '@')&&(S.at(i) != '@')){
      ans = false;
    }
  }
  if (ans == true){
    cout << "You can win" << endl;
  } 
  else{
    cout << "You will lose" << endl;
  }
}