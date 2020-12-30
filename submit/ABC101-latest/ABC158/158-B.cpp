#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N, A,B;
  cin >> N >> A >> B;
  ll ans = 0;
  ll x = N % (A+B);
  ans = N/(A+B) * A;
  ans += min(A,x);
  cout << ans << endl;
}