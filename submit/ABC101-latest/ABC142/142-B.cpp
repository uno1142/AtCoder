#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int>A(N);
    int ans = 0;

    rep(i,N){
        cin >> A[i];
        if(A[i] >= K)ans++;
    }
    cout << ans << endl;


}