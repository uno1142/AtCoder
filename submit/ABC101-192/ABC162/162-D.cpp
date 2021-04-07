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
    int N;
    cin >> N;
    string S;
    cin >> S;

    ll r = 0;
    ll g = 0;
    ll b = 0;

    rep(i,0,N){
        if(S[i] == 'R')r++;
        if(S[i] == 'G')g++;
        if(S[i] == 'B')b++;
    }
    ll ans = r*g*b;


    rep(i,0,N-2){
        rep(j,i+1,N){
            int k = j + (j - i);
            if(k >= N)continue;

            if(S[i] != S[j] && S[j] != S[k] && S[i] != S[k])ans--;

        }
    }

    cout << ans << endl;
    return 0;










}