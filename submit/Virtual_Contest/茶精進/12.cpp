#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    double W,H,x,y;
    cin >> W >> H >> x >> y;

    //半分にしたときが最大なので、小さいほうも同じ。

    double ans = H * W / 2;

    cout << fixed << setprecision(12) << ans << " ";
    if(x * 2 == W && y * 2 == H)cout << 1 << endl;
    else cout << 0 << endl;

    return 0;



}