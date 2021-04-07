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

    int N,M;
    cin >> N >> M;

    vector<int>P(M);
    vector<int>Y(M);


    rep(i,M){
        cin >> P[i] >> Y[i];
        P[i]--;
    }

    vector<vector<int>> vals(N);
    //市をまとめあげたもの P(0-index)県には、Y[i]年に生まれた市がある
    rep(i,M)vals[P[i]].push_back(Y[i]);

    //各県の市が生まれた年をソート
    rep(v,N){
        sort(vals[v].begin(),vals[v].end());
        //今回は不要だが、通常の座標圧縮ではダブりをなくす
        /* vals[v].erase(unique(vals[v].begin(), vals[v].end()), vals[v].end()); */

        //uniqueはゴミの手前のポインタを返す
    }

    rep(i,M){
        //今の市
        int v = P[i];
        //cout でやりたいなら 
        //cout << setfill('0') << right << setw(6) << v+1 ;
        printf("%06d\n",v +1);

        //座標圧縮した答え。何番目かは二分探索で(lower_boundはイテレータを返す)
        int id = lower_bound(vals[v].begin(), vals[v].end(), Y[i]) - vals[v].begin();
        printf("%06d\n",id + 1);
    }

    return 0;

}