#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    string S;
    cin >> S;

    int R = 0;
    int W = 0;

    rep(i,0,N){
        if(S[i] == 'R')R++;
        if(S[i] == 'W')W++;
    }

    string X;
    rep(i,0,R)X.push_back('R');
    rep(i,0,W)X.push_back('W');

    int ans = 0;

    rep(i,0,R){
        if(X[i] == S[i])continue;
        ans++;

    }

    cout << ans << endl;
    




}