#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll gx(ll a){
  return a * (a+1) /2;
}

int main(){

  ll N;
  cin >> N;
  
  ll ans = 0;
  
  for(int i = 1; i <= N; i++){
    ans += gx(N/i) * i;
  }
  cout << ans <<endl;
  

}