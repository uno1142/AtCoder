#include<bits/stdc++.h>
using namespace std;

int main(){
  int N ,M ,X;
  cin >> N >> M >> X;
  vector<int>C(13); //値段の配列,0-indexなのに注意
  vector<vector<int>>A(13,vector<int>(13)); //M冊の，N個のアルゴリズムの情報が入った配列
  
  //入力
  for(int i = 0; i < N; i++){
    cin >> C.at(i);
    for(int j = 0; j < M; j++){
      cin >> A.at(i).at(j);
    }
  }
  
  int minC = 10000000; //理解度を十分満たす最小の合計金額　十分大きい数字にしておく
  
  //bit全探索
  
  for(int bit = 0; bit < (1 << N); bit++){
    //試行回数bit回目
    vector<int>AL(M); //アルゴリズムの理解度を入れる配列．M種類
    int sum = 0; //合計金額を入れる
    for(int i = 0; i < N; i++){
      if(bit & (1 << i)){ //i番目のフラグが立っていたら，つまりi番目の本を買ったら
        sum += C.at(i); //金額を加算;
        for(int j = 0; j <M ;j++){
          AL.at(j) += A.at(i).at(j); //理解度を増やす
        }
      }
    }
    //ここまでにループで，どの本を買って金額がいくらになり，理解度がどれだけ増えたかわかっている
    bool flag = 0;
    for(int i =0; i < M; i++){
      if(AL.at(i) < X)flag = 1;
    }
    if(!flag)minC = min(minC,sum); //条件を満たしかつ最小の金額ならば更新する
  }
  if(minC == 10000000) cout << -1 <<endl;
  else cout << minC << endl;
}