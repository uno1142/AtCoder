#include<bits/stdc++.h>
using namespace std;

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