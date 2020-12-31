#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;


int main(){
    string S;
    cin >> S;
    int N = (int)S.size();

    for(int i = 0; i < N/2; i++){
        if(S.at(i) != S.at(N-i-1)){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;

}