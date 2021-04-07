#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){

    ll S;
    cin >> S;
    vector<ll>dp(S+1,0);
 	dp[0] = 1;
    for(int i = 1; i <=S; i++){
        for(int j = 0; j <= i-3; j++){
            dp[i] += dp[j];
            dp[i] %= MOD;

        }
    }

    cout << dp[S] << endl;
    return 0;

}