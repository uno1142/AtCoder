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
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];

    vector<int>DP(N,0);

    for(int i = 1; i < N ; i++){
        if(i == 1)DP[i] = DP[i-1] + abs(A[i-1] - A[i]);
        else DP[i] = min(DP[i-2] + abs(A[i-2] - A[i]) , DP[i-1] + abs(A[i-1] - A[i]));
    }

    cout << DP[N-1] << endl;
    return 0;




}