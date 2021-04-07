#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll A, B, K;
    cin >> A >> B >> K;

    //高橋君がクッキー足りてる

    if(A >= K)cout << A - K   << ' ' << B << endl;
    //足りてないけど青木君ので足りる
    else if(K > A && A+B >= K)cout << 0 << ' ' << A+B-K << endl;
    else cout << 0 << ' ' << 0 << endl;

    return 0;


}