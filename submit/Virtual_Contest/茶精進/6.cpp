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

    string S,T;
    cin >> S >> T;

    sort(S.begin(),S.end());
    sort(T.begin(),T.end());

    reverse(T.begin(),T.end());

    if(S < T)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;





}