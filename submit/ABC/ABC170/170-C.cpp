#include<bits/stdc++.h>
#define rep(i,n) for (ll i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  
  set<int>S; //ここに整数のリストをつくり，S.countで判定する
  
  //入力
  int X, N;
  cin >> X >> N;
  if(N == 0){
    cout << X << endl;
    return 0;
  }
  vector<int>A(110);
  rep(i,N){
    cin >> A[i];
    S.insert(A[i]);
  }
  
  //判定
  
  for(int i =0; i <= 100; i++){
    int a = X -i; //小さい方→大きい方の順で絶対値ごとにAに含まれているか確認する。見つけた時点で出力
    int b = X +i;
    if(!S.count(a)){ //X-iが含まれていなければ
      cout << a << endl;
      return 0;
    }
    else if(!S.count(b)){ //X+iが含まれていなければ
      cout << b << endl;
      return 0;
    }
    //←for文でi++してるのに！！！！！！お前がバグらせてたんじゃねえか！！！！！！！！！！！！！！！！！！！！！！！！
  }
  cout << "error" << endl;
}
