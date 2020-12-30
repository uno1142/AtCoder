#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];

    ll ans = 0;

    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            ans += A[i] * A[j];

        }
    }

    cout << ans << endl;
    return 0;
}