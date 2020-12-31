#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N,L;
    cin >> N >> L;

    vector<int>A(N);

    rep(i,N)A[i] = L + i;

    int sum = 0;
    rep(i,N){
        sum += A[i];
    }

    int ans = 1000000000;
    rep(i,N){
        int t = sum -A[i];
        if(abs(t-sum) < abs(ans -sum))ans = t;
    }
    cout << ans << endl;
    return 0;
}