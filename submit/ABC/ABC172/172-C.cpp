#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int n,m,k;
  cin >> n >> m >> k;
  vector<int>a(n);
  vector<int>b(m);
  rep(i,n)cin >> a[i];
  rep(i,m)cin >> b[i];
  

  //b[m]までの累積和をいったん取る
  ll t =0;
  rep(i,m)t +=b[i];

  
  int j = m;
  int ans =0;
  rep(i,n+1){ //i++されていく(Aの本がふえていく。0スタート。)
    while(j>0 && t>k){
      j--;
      t -=b[j]; //tがkより小さくなるまで，j(mスタート)をディクリメントしながらtからb[j]を引く
    }
    if(t > k) break;//これはjが0になったとき用
    ans = max(ans, i+j);
    if(i == n) break; //i= n+1になると範囲外でめんどくさい
    t += a[i]; //iが0冊からのスタートなので，ここでa[i]を足せばいい。(0冊のときは先にi+jしていい)
    
  }
  cout << ans <<endl;
  return 0;
  
  
}