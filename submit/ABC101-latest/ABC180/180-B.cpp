#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;



int main(){
    int N;
    cin >> N;

    vector<ll>X(N);

    ll a=0; //まんはったん　
    ll b=0;//ゆーくりっど
    ll c=0;//ちぇびしぇふ

    rep(i,N){
        cin >> X[i];
    }
    //a
    rep(i,N){
        a+= abs(X[i]);
    }

    cout << a << endl;

    //b
    rep(i,N){
        b += abs(X[i]) * abs(X[i]);
    }

    cout << setprecision(15) <<  sqrt(b) << endl;

    //c
    rep(i,N){
      c = max(c,abs(X[i]) );
    }
    cout << c << endl;
    return 0;


}
