#include <bits/stdc++.h>
using namespace std;

int main() {

  // string str; // 文字列変数を宣言
  // str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入
  // bool hoge =true or false //YES NO判定はboolへ　フラグ変数
　　
  // cin >> hogehoge; これで入力
  // cout << hogehoge << endl; これで出力, endlは改行
  // hogehoge.size()で配列などの大きさ
  // hogehoge.at(i)で配列などのi番目 
  // || または
  // && かつ
  
  // 配列の話
  // vector<int> vec;       // int型の配列変数vecを宣言
  // vec = { 25, 100, 64 }; // 25, 100, 64 という整数(int)の列を代入
  // vector<int> vec(3, 5); // {5, 5, 5}という配列
  // vec,push_back(10);     // 末尾に10を追加
  // vec.pop_back();        // 末尾の要素を削除
  // 他の配列の書き方
  // vector<int> data(3);   // vectorによる配列
  // int data[3];           // Cの配列
  // array<int, 3> data;    // arrayによる配列
  // vec.at(0)とvec[0]は同じ，#define _GLIBCXX_DEBUGを使うことで前者と後者が同じ安全性へ
  // vec1 == vec2 これは配列の全要素が一致でtrue，配列変数である必要あり
  // vector<int> hogehoge(N);
  // for (int i = 0; i < N; i++) {
  //   cin >> hogehoge.at(i);
  // }

  // stl- standard template library（関数がまとまっているもの）の関数
  // min(a, b)                       // aとbのうち小さい方の値を返す
  // max(a, b)                       // aとbのうち大きい方の値を返す
  // swap(a, b)                      // 変数aと変数bの値を交換する 
  // sort(vec.begin(), vec.end())    // 配列変数vecをソートする（要素を小さい順に並び替える）
  // reverse(vec.begin(), vec.end()) // 配列変数vecの要素の並びを逆にする
	
  // キーポイント
  // 関数の返り値はreturn 返り値；
  // 関数定義はmainより前で
  // 返り値が無い場合は返り値の型にvoidを指定：つまり，void 関数名(){~~ return;}
  // 引数が無い場合は定義と呼び出しで()だけ書く
  // int my_min(int x, int y) {
  //   if (x < y) {
  //   return x;
  //   }~~
  // }
  // プロトタイプ宣言：先にvoid hello();みたいに関数名だけを与え，後で処理を書く（実はmainも）

  // 範囲for文
  // 配列のすべての要素に対する処理に使用
  // コンテナと呼ばれるデータ型に使える
  //  for (配列の要素の型 変数名 : 配列変数) {
  //    //各要素に対する処理
  //  }

  // 多重ループ
  // for{for{if{finished = true; break}if(finished){break}}}

}
