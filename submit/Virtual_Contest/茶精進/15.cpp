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

    ll ans = INF;

    rep(i,1,N+1){
        for(int j = 1; j * i <= N; j++){
            ll now = 0;
            now += N - i*j;
            now += abs(i - j);
            ans = min(ans,now);
        }
    } 

    cout << ans << endl;




}