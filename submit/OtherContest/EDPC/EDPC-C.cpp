#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main(){
    int N;
    cin >> N;

    vector<vector<int>>pts(N,vector<int>(3));
    vector<vector<int>>dp(N,vector<int>(3));
    //A - 0, B- 1, C - 2とする

    rep(i,N){
        cin >> pts[i][0] >> pts[i][1] >> pts[i][2];
    }

    dp[0][0] = pts[0][0];
    dp[0][1] = pts[0][1];
    dp[0][2] = pts[0][2];
    
    for(int i = 1; i <N; i++){
        dp[i][0] = pts[i][0] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = pts[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = pts[i][2] + max(dp[i-1][0],dp[i-1][1]);
    }

    cout << max(dp[N-1][0],max(dp[N-1][1],dp[N-1][2])) << endl;
    return 0;



}