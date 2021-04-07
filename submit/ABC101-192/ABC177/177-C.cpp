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
    int N;
    cin >> N;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    vector<ll> B(N+1,0);

    rep(i,N){
        B[i+1] = B[i] +A[i];
    }

    ll ans = 0;
    rep(i,N){
        ll sum = (B[N] - B[i+1]) %MOD;

        ans += A[i] * sum;
        ans %= MOD;
    }

    cout << ans << endl;
    




}