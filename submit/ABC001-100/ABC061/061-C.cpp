#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    ll N,K;
    cin >> N >> K;
    vector<ll>cnt(100010);

    rep(i,N){
        int a,b;
        cin >> a >> b;
        cnt[a] += b;
    }

    for(int i = 1; i <= 100000; i++){
        if(K <= cnt[i]){
            cout << i << endl;
            return 0;
        }
        K -= cnt[i];
    }


}