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
    ll N;
    cin >> N;
    vector<ll>A(N);

    rep(i,N){
        cin >> A[i];
    }

    ll ans = 0;
    ll now = 0;

    vector<ll>max_right(N);

    vector<ll>move(N);
    move[0] = A[0];

    ll now_m = A[0];
  	max_right[0] = A[0];

    for(int i = 1; i < N ; i++){
        move[i] = move[i-1] + A[i];
        now_m = max(now_m,move[i]);

        max_right[i] = now_m;
    }

    rep(i,N){

        ll tmp = now + max_right[i];
        now += move[i];
        ans = max(tmp,ans);
    }




    cout << ans << endl;
    return 0;


}