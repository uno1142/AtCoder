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
    int H,W;
    cin >> H >> W;

    vector<string>Board(H);
    rep(i,H)cin >> Board[i];


    vector<vector<int>>dist(H,vector<int>(W,-1));
    queue<pair<int,int>>que;

    rep(i,H)rep(j,W){
        if(Board[i][j] == '#' ){
            dist[i][j] = 0;
            que.push(make_pair(i,j));
        }
    }

    while(!que.empty()){
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        rep(i,4){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= H || ny < 0 || ny >=W)continue;
            if(dist[nx][ny] == -1){
                dist[nx][ny] = dist[x][y] + 1;
                que.push(make_pair(nx,ny));
            }
        }
    }

    int ans = 0;
    rep(i,H)rep(j,W){
        ans = max(ans,dist[i][j]);

    }
    cout << ans << endl;
    return 0;








}