#include<bits/stdc++.h>
#define rep(i,n) for (ll i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  
  set<int>S; //ここにリストをつくり，S.countで判定する
  
  int X, N;
  cin >> X >> N;
  if(N == 0){
    cout << X << endl;
    return 0;
  }
  vector<int>A(110);
  for(int i = 0; i <N ; i++){
    cin >> A[i];
  }

  int ans = 0;
  for(int i = 0; i <= 100; i++){
    ans = X - i; //まずは小さいほうをみる
    bool flag = 1;
    for(int j = 0; j <N; j++){ //配列を見ていき，ansがあるか確認
      if(A[j] == ans)flag = 0; //フラグをfalseにする
    }
    if(flag){
      cout << ans << endl;
      return 0;
    }
    flag = 1;
    ans = X + i; //小さいほうがダメなら大きいほう
    for(int j = 0; j <N; j++){ //配列を見ていき，ansがあるか確認
      if(A[j] == ans)flag = 0; //フラグをfalseにする
    }
    if(flag){
      cout << ans << endl;
      return 0;
    }
    
    
  }
}