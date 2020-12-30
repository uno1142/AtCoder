#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >>A[i],A[i]--;

    vector<int>B(N);
    rep(i,N)cin >>B[i];

    vector<int>C(N);
    rep(i,N)cin >>C[i];

    int ans = B[A[0]];

    for(int i = 1; i < N; i++){
        ans += B[A[i]];
        if(A[i] == A[i-1] +1)ans += C[A[i-1]];

    }

    cout << ans << endl;
    return 0;




}