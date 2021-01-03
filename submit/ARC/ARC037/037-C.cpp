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

    sort(A.begin(),A.end());

    sort(B.begin(),B.end());


    ll ng = 0;
    ll ok = 1e18;


    while(ok -ng > 1){
        ll mid = (ok + ng)/2;

        ll cnt = 0;
        ll index = N;//index:A[i]の段でmidよりも小さいa*bの数 

        //Bをソートしてあるので、最大のもの==B[N-1]をA[i]にかけてmidよりも小さければ、その行はスキップできる

        rep(i,N){
            //超えているときは、小さいものが出てくるまで減らしていく
            while(index > 0 && A[i] * B[index - 1] > mid){
                index--;
            }
            cnt += index;
        }

        //midよりも大きい数がK個を超えていたら、okをmidにする
        if(cnt >= K)ok = mid;
        else ng = mid;
    }
    
    cout << ok << endl;
    return 0;

}