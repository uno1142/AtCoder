#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

//一度解説みて解いたけどわからなすぎるのでもういっかいなにも見ずに

int main(){
    int N;
    cin >> N;

    vector<int>A(N);

    vector<int>dp(N);

    rep(i,N)cin >> A[i];

    dp[0] = A[0];

    for(int i = 1; i < N; i++){
        if(i == 1) dp[i] = dp[i-1] + abs(A[i] - A[i-1]);
        else{
            dp[i] = min(dp[i-1] + abs(A[i] - A[i-1]) , dp[i-2] + abs(A[i-2] - A[i]) );
        }
    }

    cout << dp[N-1] << endl;
    return 0;

}