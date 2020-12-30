#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];
    sort(A.begin(),A.end());

    int ans = 0;

    rep(i,N){
        rep(j,i){
            rep(k,j){
                    if(A[i] == A[j] || A[j] == A[k])continue;
                    if(A[j]+A[k] > A[i] && A[j]+A[i] > A[k] && A[i] + A[k] > A[j])ans++;
            }
        }
    }



    cout << ans << endl;
}