#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 998244353;

int main(){
    ll A,B,C;
    cin >> A >> B >> C;
    ll a = A*(A+1) / 2;
    a %= MOD;
    ll b = B*(B+1) / 2;
    b %= MOD;

    ll c = C*(C+1)/2;
    c %= MOD;

    ll ans = a * b %MOD * c;

    cout << ans % MOD << endl;
    return 0;


}