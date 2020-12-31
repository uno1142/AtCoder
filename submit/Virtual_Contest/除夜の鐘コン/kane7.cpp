#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    int N;
    cin >> N;
    vector<string>S(N);
    rep(i,N)cin >> S[i];

    int a = 0;
    int b = 0;

    rep(i,N){
        rep(j,N){
            if(S[i][j] == 'R' )a++;
            if(S[i][j] == 'B')b++;
        }
    }

    if(a > b)cout << "TAKAHASHI" << endl;
    else if(a < b)cout << "AOKI" << endl;
    else if(a == b)cout << "DRAW" << endl;
    return 0;


}