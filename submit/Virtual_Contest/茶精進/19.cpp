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
    vector<int>A(N);
    rep(i,0,N)cin >> A[i];
    sort(A.begin(),A.end());

    int ans = 0;

    rep(i,0,N){
        rep(j,i+1,N){
            //イテレータ同士で計算
            int k = lower_bound(A.begin(),A.end(),A[i] + A[j]) - A.begin();
            ans += k - j - 1;
        }
    }

    cout << ans <<endl;
    return 0;



}