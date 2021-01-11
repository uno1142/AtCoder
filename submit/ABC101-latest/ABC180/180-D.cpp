#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    ll X,Y,A,B;
    cin >> X >> Y >> A >> B;

    ll exp = 0;
    //先に過去問に通う
    while(X < Y / A && X * A < X + B){
        X *= A;
        exp++;
    }
    exp += (Y - X -1)/ B;
    cout << exp << endl;
    return 0;
}