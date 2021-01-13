#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const ll INF = 1e9;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> dp(N+1,vector<int>(3,0));
    //dp[i][0] : A dp[i][1] : B dp[i][2] : C

    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for(int i = 1; i <= N; i++){
        int a,b,c;
        cin >> a >> b >> c;

        dp[i][0] = max(dp[i-1][1] + a, dp[i-1][2] + a);
        dp[i][1] = max(dp[i-1][0] + b, dp[i-1][2] + b);
        dp[i][2] = max(dp[i-1][0] + c, dp[i-1][1] + c);

    }

    cout << max( dp[N][0] , max(dp[N][1], dp[N][2])) << endl;
    return 0;

}