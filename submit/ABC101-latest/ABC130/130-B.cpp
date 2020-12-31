#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int>L(N);
    rep(i,N)cin >> L[i];

    //0の時に一回目を跳ねる

    int cnt = 1;

    int now = 0;

    for(int i = 0; i < N; i++){

        now += L[i];
        if(now > X){
            cout << cnt << endl;
            return 0;
        }

        cnt++;
    }

    cout << cnt << endl;
    return 0;
}