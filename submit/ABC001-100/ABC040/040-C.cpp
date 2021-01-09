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
    vector<int>A(N);
    rep(i,N)cin >> A[i];
    vector<int>dp(N,INF);
    dp[0] = 0;


    for(int i = 1; i < N; i++){
        chmin(dp[i],dp[i-1] + abs(A[i-1] - A[i]));
        if(i > 1)chmin(dp[i],dp[i-2] + abs(A[i-2] - A[i]));
    }

    cout << dp[N-1] << endl;
    return 0;

}