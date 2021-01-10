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

    //A面に書かれていた、その種類の色の数
    vector<int>cnt(2000010,0);

    vector<pair<int,int>>A(N);

    rep(i,N){
        cin >> A[i].first >> A[i].second;

        cnt[A[i].first]++;
        cnt[A[i].second]++;
    }


}