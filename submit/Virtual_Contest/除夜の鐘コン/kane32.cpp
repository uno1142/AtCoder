#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

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


    int size(int x) { //サイズを返す
        return -r[root(x)];
    }
};

int main(){

    int N, M;
    cin >> N >> M;
    UnionFind UF(N);
    rep(i,M){
        int a,b;
        cin >> a >> b;
        //1-indexed
        a--;
        b--;
        UF.unite(a,b);
    }

    
    int ans = 0;

    rep(i,N){
        ans = max(ans, UF.size(i));
    }

    cout << ans << endl;
    return 0;





}