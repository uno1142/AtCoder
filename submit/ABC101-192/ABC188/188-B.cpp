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
    vector<int>B(N);

    rep(i,N)cin >> A[i];
    rep(i,N)cin >> B[i];

    ll ans = 0;

    rep(i,N)ans += A[i]*B[i];

    if(ans == 0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}