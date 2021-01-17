#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<ll>A(N);
    rep(i,0,N)cin >> A[i];
    vector<ll>sum(N);
    sum[0] = A[0];
    rep(i,1,N)sum[i] = sum[i-1] + A[i];

    ll ans = INF;

    for(int i = N-2; i >= 0 ; i--){

        ans = min(ans, abs( (sum[N-1] - sum[i]) - sum[i] ) );
        //ここまだ早くなりそう
    }

    cout << ans << endl;

}