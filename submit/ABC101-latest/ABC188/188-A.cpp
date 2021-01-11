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
    int x, y;
    cin >> x >> y;

    int N = abs(x - y);

    if (N <= 2)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}