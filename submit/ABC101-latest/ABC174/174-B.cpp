#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N,D;
    cin >> N >> D;

    int ans = 0;

    rep(i,N){
        ll p,q;
        cin >> p >> q;

        double now = sqrt(p*p + q*q);
        if(D >= now)ans++;
    }
    cout << ans << endl;
    return 0;

}