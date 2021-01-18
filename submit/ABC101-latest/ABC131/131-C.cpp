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

//最大公約数
ll gcd(ll a, ll b){
  if(a % b == 0)return b;
  else return gcd(b,a%b);
}

//最小公倍数※gcdとセットで使うこと
ll lcm(ll a, ll b){
  return a * b / gcd(a,b);
}

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    //総和　- (Cで割り切れる数 + Dで割り切れる数 - CでもDでも割り切れる数)
    ll ans = b - a + 1 - (b/c - (a-1)/c + b/d - (a-1)/d - (b/lcm(c,d) - (a-1)/lcm(c,d)) );
    cout << ans << endl;
}
