#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

ll powmod(ll x, ll y){
    ll res = 1;
    for(ll i = 0; i < y ; i++){
        res = res * x % MOD;
    }
    return res;
}

int main(){
    ll N;
    cin >> N;

    ll ans = powmod(10,N) - powmod(9,N) - powmod(9,N) + powmod(8,N);
    ans %= MOD;
    ans = (ans + MOD) % MOD;

    cout << ans << endl;
    return 0;





}