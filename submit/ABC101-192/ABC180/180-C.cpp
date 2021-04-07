#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;

    set<ll>s;


    for(ll i = 1; i*i <= N; i++){
        if(N % i == 0){
            s.insert(i);
            s.insert(N/i);
        }

    }

    for(auto x: s)cout << x << endl;
    return 0;





}