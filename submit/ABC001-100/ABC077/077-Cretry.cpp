#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    ll N;
    cin >> N;

    vector<ll>A(N);
    vector<ll>B(N);
    vector<ll>C(N);

    rep(i,N)cin >> A[i];
    rep(i,N)cin >> B[i];
    rep(i,N)cin >> C[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    vector<ll>X(N);

    ll ans = 0;


    cout << ans << endl;
    return 0;

}