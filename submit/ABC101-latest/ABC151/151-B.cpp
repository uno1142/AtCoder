#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N, K , M;
    cin >> N >> K >> M;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    ll cal = 0;

    rep(i,N)cal += A[i];

    rep(i,K){
        int now = cal + i;
        if(now / N >= M){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;

}