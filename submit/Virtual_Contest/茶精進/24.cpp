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
    ll N,K;
    cin >> N >> K;
    vector<ll>A(N);
    rep(i,0,N)cin >> A[i];

    //しゃくとり典型

    ll ans = 0;
    ll sum = 0;
    int right = 0;

    for(int left = 0; left < N; left++){
        while(right < N && sum < K){
            sum += A[right];
            right++;
        }
        if(sum < K){
          break;
        }
        ans += N - right +1;

        if(right == left)right++;
        else sum -= A[left];
    }


    cout << ans << endl;



}