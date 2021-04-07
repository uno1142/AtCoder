#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){

    int N,K;
    cin >> N >> K;

    vector<double>P(N);
    rep(i,0,N)cin >> P[i];

    vector<double>sum(N);//累積和配列
    sum[0] = (P[0]+1) / 2;

    rep(i,0,N){
        sum[i] = sum[i-1] + (P[i]+1) / 2;
    }

    double ans = 0;

    rep(i,K-1,N){
        ans = max(ans, sum[i] - sum[i-K]);
    }

    cout <<fixed << setprecision(12) <<  ans << endl;
    return 0;

}