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

    vector<pair<ll,ll>>event;
    rep(i,N){
        ll a,b,c;
        cin >> a >> b >> c;
        event.emplace_back(a-1,c);
        event.emplace_back(b,-c);
    }
    sort(event.begin(),event.end());

    ll ans = 0;
    ll fee = 0;
    ll t = 0;

    for(auto x : event){
        if(x.first != t){
            ans += min(C,fee) * (x.first -t);
            t = x.first;
        }
        fee += x.second;

    }

    cout << ans << endl;
    return 0;
    

    
}