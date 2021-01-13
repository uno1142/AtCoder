#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const ll INF = 1e9;

int main(){

    int N,K;
    cin >> N >> K;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    vector<int>dp(N,INF);
    dp[0] = 0;

    for(int i = 1; i < N; i++){
        for(int k = 1; k <= K && i-k > 0; k++){
            dp[i] = min(dp[i] , dp[i-k] + abs(A[i] - A[i-k])); 
        }
    }

    cout << dp[N-1] << endl;

}