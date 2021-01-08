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


int main(){
    int N, K;
    cin >> N >> K;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    vector<int>DP(N,INF);
    DP[0] = 0;

    for(int i = 1; i < N; i ++){
        for(int k = 1; k <= min(i,K); k++){
            DP[i] = min(DP[i], DP[i-k] + abs(A[i - k] - A[i]));
        }
    }

    cout << DP[N-1] << endl;
    return 0;


}