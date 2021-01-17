#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

ll cal (ll n){
    ll ret = 1;
    rep(i,2,n+1){
        ret = ret * i % MOD;
    }
    return ret;

}

int main(){
    int N,M;
    cin >> N >> M;

    if(abs(N-M) >= 2){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;

    //NとMが等しいときは、どちらの端に置くかで*=2;

    ans = cal(N) * cal(M) % MOD;

    if(N == M)ans = ans * 2 % MOD;

    cout << ans << endl;
    



}