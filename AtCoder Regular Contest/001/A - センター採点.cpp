#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string C;
    cin >> C;
    vector<int> Ans(4);
    Ans.at(0) = count(C.begin(), C.end(), '1');
    Ans.at(1) = count(C.begin(), C.end(), '2');
    Ans.at(2) = count(C.begin(), C.end(), '3');
    Ans.at(3) = count(C.begin(), C.end(), '4');
    sort(Ans.begin(),Ans.end());
    
    cout << Ans.at(3) << " " << Ans.at(0) << endl;
}