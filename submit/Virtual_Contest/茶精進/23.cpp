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
    ll a,b,x;
    cin >> a >> b >> x;

    //b以下のxの数はb/x(切り捨て),そっからa以下の数を引けばいい

    ll p = a/x;
    ll q = b/x;

    ll ans = q - p;
    if(a % x == 0)ans++;

    cout << ans << endl;
}