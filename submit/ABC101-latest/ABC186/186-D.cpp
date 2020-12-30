#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    //どうみても累積和
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];

    //i,jは添え字じゃなくて数字なのでソートしていい

    sort(A.begin(),A.end());

    //差はすべてソートしたのでA[i] - A[i-1]
    //iの数×A[i]から,A[i-1]までの合計を引いてやればすべてまとめて計算できる
    //例: i = 2のとき、5-2 + 5-1 = 5 *2(==i) - (2 + 1) 

    ll ans = 0;
    ll sum = 0;

    for(int i = 1; i < N; i++){
        sum += A[i-1];
        //オーバーフロー注意
        ans += (ll)A[i]*i - sum;

    }

    cout << ans << endl;
    return 0;





}