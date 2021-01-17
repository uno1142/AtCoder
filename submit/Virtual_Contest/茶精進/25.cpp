#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

int main(){
    ll N,M;
    cin >> N >> M;

    map<ll,ll>mp;

    rep(i,0,N){
        ll a;
        cin >> a;
        mp[-a]++;
    }

    rep(i,0,M){
        ll b,c;
        cin >> b >> c;
        mp[-c] += b;
    }
    ll ans = 0;

    for(auto x :mp){
        ans += min(N,x.second) * (-x.first);
        N -= x.second;
        if(N <= 0)break;
    }

    cout << ans << endl;
    


}