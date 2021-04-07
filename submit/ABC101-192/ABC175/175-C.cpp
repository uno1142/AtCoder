#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e18;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    ll X,K,D;
    cin >> X >> K >> D;

    X = abs(X);

    //Kが偶数の時と奇数の時で場合分け
    ll div_times = X / D;
    //Kが足りないとき
    if(div_times > K){
        cout << X - D * K << endl;
    }
    else{
        X = X - D * div_times;
        K -= div_times;
        //余った回数が偶数ならいったりきたりでその数字
        if( K % 2 == 0)cout << X << endl;
        else cout << abs(X - D) << endl;

    }

    return 0;
    
}