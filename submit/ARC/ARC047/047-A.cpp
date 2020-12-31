#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){

    int N,L;
    cin >> N >> L;
    string S;
    cin >> S;

    int tab = 1;
    int ans = 0;

    rep(i,N){
        if(S.at(i) == '+')tab++;
        else tab--;

        if(tab > L){
            ans++;
            tab = 1;
        }

    }

    cout << ans << endl;
    return 0;


}