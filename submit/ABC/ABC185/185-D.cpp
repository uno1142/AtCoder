#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;


int main(){

    //青が塗れない 一番短いブロックが適切なk

    int N,M;
    cin >> N >> M;
    vector<int>A(M);
    rep(i,M)cin >> A[i];

    sort(A.begin(),A.end());
    
    //一番後ろに青があるとやりやすい
    A.push_back(N+1);

    //Sに青マスで分割された範囲の長さを付け足していく
    vector<int>S;

    int now = 1;
    rep(i,M+1){
        int w = A[i] - now;
        if(w != 0)S.push_back(w);
        now = A[i]+1;

    }

    int k = 1e9; //十分大きい数字
    for(int w : S){
        //一番小さいブロックのサイズ
        k = min(k,w);

    }
    int ans = 0;

    for(int w : S){
        //1マスでも残っているならもう一回なので切り上げ
        ans += (w + k -1)/k;
    }

    cout << ans << endl;
    return 0;









}