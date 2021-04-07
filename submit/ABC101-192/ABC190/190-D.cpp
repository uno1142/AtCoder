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

    ll X;
    cin >> X;

    ll tmp = X;

    if(X %2 == 0){
        //偶数の時は
        tmp /=2;
        tmp--;
    }
    else{
        //奇数は切り捨て
        tmp /=2;
    }

    int now = 0;

    while(now != X){
        now += tmp;
        tmp--;
    }

    tmp--;

    ll ans = tmp;

    cout << ans << endl;
    


    
}