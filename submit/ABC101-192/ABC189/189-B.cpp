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

    int X;
    cin >> X;


    ll ans = 0;

    rep(i,0,N){
        int a,b;
        cin >> a >> b;

        ans += a * b;

        if(ans > X *100){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;




    
}