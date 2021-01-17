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
    int N,L;
    cin >> N >> L;

    vector<string>S(N);
    rep(i,0,N)cin >> S[i];

    sort(S.begin(),S.end());

    string ans = "";

    rep(i,0,N){
        rep(j,0,L){
            ans.push_back(S[i].at(j));
        }
    }

    cout << ans << endl;





}