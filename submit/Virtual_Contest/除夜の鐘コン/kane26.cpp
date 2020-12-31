#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    ll A ,B;
    cin >> A >> B;

    if(A < 0){
        if(B > 0)cout << -A +B -1 << endl;
        else cout << B-A << endl;
    }
    else cout << B - A << endl;
    return 0;

}