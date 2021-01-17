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
    int N;
    cin >> N;

    vector<ll>A(N);
    rep(i,0,N)cin >> A[i];
    //最小の絶対値をとっておいて、minus_cntが奇数ならmin_num*2を引く

    ll min_num = INF;

    ll sum = 0;
    int minus_cnt = 0;
    rep(i,0,N){
        if(A[i] < 0)minus_cnt++;
        sum += abs(A[i]);

        min_num = min(min_num,abs(A[i]));
    }

    if(minus_cnt % 2 == 0)cout << sum << endl;
    else cout << sum - 2 * min_num << endl;





}