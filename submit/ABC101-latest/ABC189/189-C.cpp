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
    ll N;
    cin >> N;
    vector<ll>A(N);
    rep(i,0,N)cin >> A[i];

    ll ans = 0;
    ll x = 0;

    for(int left = 0; left < N; left++){
        ll sum = 0;
        ll right = left;

        ll x = A[left];

        while(right < N){
            sum = x * (right - left);
            ans = max(ans, sum);

            if(x > A[right]){
                x = A[right];
            }
            right++;
        }
        //breakしたということは、A[right]がxより小さかった。
        sum = x * (right - left);
        ans = max(ans, sum);

        //次はleftが進んでいく。
        

    }



    cout << ans << endl;
    
}