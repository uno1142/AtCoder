#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;

    vector<int>A(N);

    rep(i,N)cin >> A[i];

    int ans = 0;

    for(int i = 1; i < N-1; i++){
        if( A[i-1] > A[i] && A[i] > A[i+1])ans++;
        else if(A[i-1] < A[i] && A[i] < A[i+1])ans++;

    }
    cout << ans << endl;
    return 0;


}