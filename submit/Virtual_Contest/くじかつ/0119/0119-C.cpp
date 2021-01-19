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

    vector<int>L(N);
    rep(i,0,N)cin >> L[i];

    sort(L.begin(),L.end());

    ll ans = 0;

    rep(i,0,N)rep(j,i+1,N){
        int itr = lower_bound(L.begin(),L.end(),L[i] + L[j]) - L.begin();
        ans += itr - j - 1;
    }

    cout << ans << endl;
    return 0;


}