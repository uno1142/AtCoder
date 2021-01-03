#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;


int main(){
    int N;
    cin >> N;

    vector<ll>A(N);
    vector<ll>B(N);
    vector<ll>C(N);

    rep(i,N)cin >> A[i];
    rep(i,N)cin >> B[i];
    rep(i,N)cin >> C[i];

    //A,Cをソートしてしまえば、Bはにぶたんできる
    sort(A.begin(),A.end());

    sort(C.begin(),C.end());

    ll ans = 0;

    rep(i,N){
        ll a = lower_bound(A.begin(),A.end(),B[i]) - A.begin();
        ll b = C.end() - upper_bound(C.begin(),C.end(),B[i]);

        ans += a*b;
    }

    cout << ans << endl;
    return 0;



}