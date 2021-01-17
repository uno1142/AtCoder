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
    int N,M;
    cin >> N >> M;

    vector<ll>A(N);
    rep(i,0,N)cin >> A[i];

    map<ll,int>mp;

    rep(i,0,N){
        mp[A[i]]++;
    }

    rep(i,0,M){
        ll b, c;
        cin >> b >> c;

        for(auto x : mp){
            if(x.first > c)break;
            
            if(b >= x.second){
                mp[c]+= b;
                b -= x.second;
                x.second = 0;
                
            }
            else{
                mp[c]+= x.second - b;
                x.second -= x.second - b;
                break;
            }
        }


    }

    ll ans = 0;
    for(auto x: mp){
        ans += x.first * x.second;
    }

    cout << ans << endl;
    return 0;




}