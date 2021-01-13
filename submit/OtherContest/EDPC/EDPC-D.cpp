#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const ll INF = 1e9;

int main(){
    ll N,W;
    cin >> N >> W;

    vector<int>w(N+1);
    vector<ll>v(N+1);

    vector<vector<ll>>dp(N+1,vector<ll>(W+1,0));

    rep2(i,1,N+1) cin >> w[i] >> v[i];

    rep2(i,1,N+1){
        rep(sum_w,W+1){
            if(sum_w - w[i] >= 0){
                dp[i][sum_w] =  max(dp[i-1][sum_w] , dp[i-1][sum_w -w[i]] + v[i]);
            }
            else dp[i][sum_w] = dp[i-1][sum_w];

        }

    }

    cout << dp[N][W] << endl;
    return 0;






}