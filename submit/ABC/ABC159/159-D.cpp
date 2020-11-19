#include<bits/stdc++.h>
#define rep(i,n) for (ll i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int combination(int X){ //組み合わせの数を求める関数
  return X*(X-1)/2;
}

int main(){
  ll n; 
  cin >> n;
  vector<ll>A(200010);
  vector<ll>B(200010);
  ll ans = 0;
  rep(i,n){
    cin >> A[i];
    ans += B[A[i]];
    B[A[i]]++;
  }
  rep(i,n){
    cout << ans - B[A[i]] + 1 << endl;
  }
}