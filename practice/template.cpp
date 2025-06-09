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
  // vec.push_back(10);     // 末尾に10を追加
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

  // 2次元配列
  // vector<vector<int>> data = {
  //  {7, 4, 0, 8},
  //  {2, 0, 3, 5},
  //  {6, 1, 7, 0},
  // };
  //for (int i = 0; i < 3; i++) {
  //  for (int j = 0; j < 4; j++) {
  //    cin >> data.at(i).at(j);
  //  }
  //}
  // 宣言
  // vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値));
  // vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2));  // 初期値を省略
  // vector<vector<要素の型>> 変数名(縦の要素数, vector<要素の型>(横の要素数));
  // vector<vector<型>> 変数名(N);  // 「要素数0の配列」の配列，後で要素を追加するなど
  // アクセス
  // 変数名.at(添字1).at(添字2)
  // 変数名.at(上から何番目か).at(左から何番目か)
  // 大きさ
  // data.size();                         // 3 (縦の要素数) 
  // data.at(0).size();                   // 4 (横の要素数)
  // 行毎に要素数の違うに次元配列→ジャグ配列
  // array を用いた2次元配列
  // array<array<int, 4>, 3> data = {};   // 縦3 × 横4 の2次元配列
  // data.at(1).at(2)                     // 上から2番目、左から3番目の要素へのアクセス
  // Cの配列を用いた2次元配列
  // int data[3][4] = {};                 // 縦3 × 横4 の2次元配列
  // data[1][2]                           // 上から2番目、左から3番目の要素へのアクセス

  // 参照
  // 参照先の型 &参照の名前 = 参照先;で参照を宣言できる
　// int &b = a;  // bは変数aの参照
  // b = 4;       // 参照先の値を書き換える(aが4になる)
  // int &c = b;  // 変数aへの参照
  // int g(int &x) {~~ //引数を参照にする関数
  // vectorの要素への参照を生成した後は元のvectorの要素数が変わるような操作を行わないように注意

  // 再帰関数
  // ベースケース：再帰呼び出しを行わずに完了できる処理
  // 再帰ステップ：再帰呼び出しを行い，その結果を用いて行う処理
  // 1.「引数」「返り値」「処理内容」を決める
  // 2. 再帰ステップの実装
  // 3. ベースケースの実装 （再帰呼び出しを行わずに完了できる処理）
}
