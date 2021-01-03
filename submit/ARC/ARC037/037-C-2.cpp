#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    ll N,K;
    cin >> N >> K;
    vector<ll>A(N);
    vector<ll>B(N);

    rep(i,N)cin >> A[i];
    rep(i,N)cin >> B[i];

    sort(B.begin(),B.end());


    ll ng = 0;
    ll ok = 1e18;

    while(ok -ng > 1){
        ll mid = (ok + ng)/2;
        ll cnt = 0;

        rep(i,N){
            //A[i]*B[x] <= midか調べることは、B[x] <= mid / A[i]を調べるのと同じ
            //Bはソートしてある
            int it = upper_bound(B.begin(),B.end(),mid/A[i]) - B.begin();
            //基本的にははit == N-1になるため計算量も少ない。
            cnt += it;
        }

        //midよりも大きい数がK個を超えていたら、okをmidにする
        if(cnt >= K)ok = mid;
        else ng = mid;
    }
    
    cout << ok << endl;
    return 0;

}