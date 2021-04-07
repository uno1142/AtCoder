#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;


int main(){
    ll N;
    cin >> N;

    ll ans = 0;
  	for(ll i = 0; i < N; i++){
      ll a, b;
      cin >>a >> b;
      ans += b*(b+1) / 2 - a * (a-1) / 2;
    }
    cout << ans << endl;
    return 0;
}