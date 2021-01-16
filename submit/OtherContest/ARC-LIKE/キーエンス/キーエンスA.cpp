#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<ll>A(N);
    vector<ll>B(N);

    rep(i,0,N)cin >> A[i];
    rep(i,0,N)cin >> B[i];

    vector<ll>C(N);

    vector<ll>A_MAX(N);


    //一番でかいa,bを記憶しておく

    ll a_max = 0;

    rep(i,0,N){
        if(a_max < A[i])a_max = A[i];
        A_MAX[i] = a_max;
    }
    C[0] = A[0] * B[0];

    rep(i,1,N){

        ll b_max = 0;
        rep(j,i,N){
            if(B[i] > b_max)b_max = B[i];
        }
        C[i] = max(C[i-1] , A_MAX[i] * b_max );

    }
    rep(i,0,N)cout << C[i] << endl;
    return 0;








}