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

    map<int,int>mp;

    rep(i,N){
        //0で初期化
        mp[A[i]];
    }

    int now = 0;

    //mapには小さい方から順に入っているので、何番目かの番号をつけてあげる

    for(auto x : mp){
        mp[x.first] = now;
        now++;
    }

    rep(i,N){
        cout << mp[A[i]] << endl;
    }

    return 0;



}