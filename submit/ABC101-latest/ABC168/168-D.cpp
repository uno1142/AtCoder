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

vector<vector<int>> to(100005);


int main(){
    int N , M ;
    cin >> N >> M;


    rep(i,M){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    queue<int>que;
    vector<int> dist(N,-1);
    vector<int> pre(N,-1);

    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for( int u : to[v]){
            if(dist[u] != -1)continue;
            dist[u] = dist[v]+1;
            pre[u] = v;
            que.push(u);
        }
    }

    cout << "Yes" << endl;

    rep(i,N){
        if(i == 0)continue;
        int ans = pre[i];
        ans++;
        cout << ans << endl;

    }



}