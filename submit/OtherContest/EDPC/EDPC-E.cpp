#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;


int main(){
    ll N,W;
    cin >> N >> W;

    vector<ll>w(N+1);
    vector<ll>v(N+1);
    //今回のdp配列は重さが入る
    vector<vector<ll>>dp(N+1,vector<ll>(100001,INF));
    dp[0][0] = 0;
    rep(i,1,N+1)cin >> w[i] >> v[i];

    rep(i,1,N+1){
        rep(possible_v,0,100001){
            if(possible_v - v[i] >= 0){
                //配列には重さが入る(二回目)
                dp[i][possible_v] = min(dp[i-1][possible_v], dp[i-1][possible_v - v[i]] + w[i]);
            }
            else dp[i][possible_v] = dp[i-1][possible_v];

        }

    }

    //大きいほうから見ていって、W以下になったpossible_vが答え！
    ll ans = 100000;

    while(dp[N][ans] > W)ans--;

    cout << ans << endl;
    return 0;

    







}