#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

struct UnionFind{
    vector<int> r; //親番号。自信が親なら、その集合の属する頂点数*-1

    UnionFind(int N){ //根を初期化
        r = vector<int>(N, -1);
    }

    int root(int x){ //データが属する木の根を得る　root(x) = {xの木の根}
        if(r[x] < 0)return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y){//xとyを併合
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return false;//同じ木にある
        if(r[rx] > r[ry])swap(x,y);
        r[rx] += r[ry]; //根をつなげる
        r[ry] = rx;
        return true;
    }

    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }


    int size(int x) { //サイズを返す
        return -r[root(x)];
    }
};

int main(){
    int N,M;
    cin >> N >> M;
    UnionFind uf(N);
    rep(i,0,M){
        int a,b;
        cin >> a >> b;
        //1-indexed
        a--;
        b--;
        uf.unite(a,b);

    }
    int ans = 0;
    rep(i,0,N){
        //根がiと一致しているなら、その都市は孤立しているので道を作る必要がある
        if(uf.root(i) == i)ans++;
    }
    ans--;
    cout << ans << endl;
    return 0;

}