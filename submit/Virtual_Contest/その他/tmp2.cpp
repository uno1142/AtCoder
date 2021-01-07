#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;


int main(){
    int N,M;
    cin >> N >> M;

    Graph G(N);
    for(int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N,-1); //全頂点を未訪問に
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    //BFS開始

    while(!que.empty()){
        int v = que.front();
        que.pop();

        //vからたどれる頂点をすべて探索
        for(int nv : G[v]){
            if(dist[nv] != -1)continue;

            dist[nv] = dist[v] +1 ;
            que.push(nv);
        }
    }

    for(int v = 1; v < N; v++)cout << v << ":" << dist[v] << endl;


}