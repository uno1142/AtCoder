#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    int N,M,T;
    cin >> N >> M >> T;

    vector<pair<int,int>>A(M);
    rep(i,M)cin >> A[i].first >> A[i].second;

    int nowtime = 0;
    int firstN = N;


    //firstNがバッテリー容量

    rep(i,M){
        N -= A[i].first - nowtime;

        if(N <= 0){
            cout << "No" << endl;
            return 0;
        }

        N += (A[i].second - A[i].first); //滞在中は充電
        if( N > firstN) N = firstN; //最大容量を超えない
        nowtime = A[i].second; //時刻更新
    }

    N -= T - nowtime;
    if(N <= 0 )cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}