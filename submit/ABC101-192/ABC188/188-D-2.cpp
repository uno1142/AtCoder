#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};



int main(){
    ll N,C;
    cin >> N >> C;

    map<int,ll> events;
    rep(i,N){
        int a,b,c;
        cin >> a >> b >> c;
        events[a] += c;
        events[b+1] -=c;
    }

    ll ans = 0;
    ll s = 0;
    int pre = 0;


    //mapだとここでソートがいらない！便利

    for( auto event : events){
        ans += min(C,s) * (event.first - pre);
        s += event.second;
        pre = event.first;

    }

    cout << ans << endl;


    
}