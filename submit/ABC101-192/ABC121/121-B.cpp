#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N,M,C;
    cin >> N >> M >> C;

    vector<int> B(M);
    rep(i,M)cin >> B[i];

    vector<vector<int>>A(N,vector<int>(M));

    rep(i,N){
        rep(j,M)cin >> A[i][j];
    }

    int ans = 0;

    //各コードを判定

    rep(i,N){
        int now = C;

        rep(j,M){
            now += B[j] * A[i][j];
        }

        if(now > 0)ans++;

    }
    cout << ans << endl;
    return 0;
}