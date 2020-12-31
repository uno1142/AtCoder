#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){
    ll S , P ;
    cin >> S >> P;

    // M = S - Nを代入して N*(S-N) = Pをルートまで

    for(ll i = 0; i*i <= P; i++){
        if(i* (S-i) == P){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;


}