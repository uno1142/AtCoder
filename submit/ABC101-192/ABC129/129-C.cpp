#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    //範囲外エラーをするので幻のN+1段目を生やす
    vector<int>broken(N+1);

    //壊れた段に1を入れておく
    rep(i,M){
        int a;
        cin >> a;
        broken[a] = 1;
    }

    vector<int> dp(N+1);

    const int MOD = 1000000007;
    dp[N] = 1;
    for(int i = N-1; i >=0 ; i--){
        if(broken[i]){
            dp[i] = 0;
            continue; 
        }
        dp[i] = (dp[i+1] + dp[i+2]) % MOD;

    }

    cout << dp[0] << endl;
    
    return 0;

}