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
    ll N;
    cin >> N;

    vector<ll>name(5,0);//M:0 A:1 R:2 C:3 H:4

    rep(i,0,N){
        string S;
        cin >> S;

        if(S[0] == 'M' )name[0]++;
        if(S[0] == 'A')name[1]++;
        if(S[0] == 'R')name[2]++;
        if(S[0] == 'C')name[3]++;
        if(S[0] == 'H')name[4]++;
    }

    ll ans = 0;

    int first[10] = {0,0,0,0,0,0,1,1,1,2};
    int second[10] = {1,1,1,2,2,3,2,2,3,3};
    int third[10] = {2,3,4,3,4,4,3,4,4,4};

    rep(j,0,10){
        ans += name[first[j]] * name[second[j]] * name[third[j]];
    }

    cout << ans << endl;
    



}