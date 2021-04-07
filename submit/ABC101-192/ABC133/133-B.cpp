#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N, D;
    cin >> N >> D;

    vector<vector<int>> A (N,vector<int>(D));

    rep(i,N){
        rep(j,D)cin >> A[i][j];
    }

    int ans = 0;

    for(int i = 0; i < N ; i++){
        for(int j = i+1; j < N; j++){
            int now = 0;
            for(int k = 0; k < D; k++){
                int diff = abs(A[i][k] - A[j][k]);
                now += diff * diff;


            }
            bool flag = false;
            for(int k = 0; k <= now; k++){
                if(k*k == now)flag = true;
            }
            if(flag)ans++;
        }
    }

    cout << ans << endl;
    return 0;

}