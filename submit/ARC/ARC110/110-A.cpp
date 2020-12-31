#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){
  ll N;
  cin >> N;
  ll ans=1;
  for(ll i=1;i<=N;i++){
    ans=ans*i/gcd(ans,i);
  }
  cout << ans+1 << endl;
}