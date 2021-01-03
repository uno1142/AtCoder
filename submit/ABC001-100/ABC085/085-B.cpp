#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];
    sort(A.begin(),A.end());

    int ans = 1;

    for(int i = 1; i < N; i++){
        if(A[i] != A[i-1])ans++;

    }

    cout << ans << endl;
    return 0;

}