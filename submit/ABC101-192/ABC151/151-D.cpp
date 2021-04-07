#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};


int main(){
    int H ,W;
    cin >> H >> W;

    vector<string>Board(H);
    rep(i,H)cin >> Board[i];

    //全スタート位置を試して、最大距離を保存しておいて比較

    int ans = 0;
    rep(i,H)rep(j,W){
        int sx = i;
        int sy = j;
        //(sx,sy)が開始位置
        if(Board[i][j] == '#')continue;

        vector<vector<int>>dist(H,vector<int>(W,-1));
        queue<pair<int,int>> que;

        que.push(make_pair(sx,sy));
        dist[sx][sy] = 0;

        int now_max = 0;

        //BFS
        while(!que.empty()){
            pair<int,int>current_pos = que.front();
            int x = current_pos.first;
            int y = current_pos.second;
            que.pop();

            now_max = max(now_max,dist[x][y]);

            for(int dir = 0; dir < 4; dir++){
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if(nx < 0 || nx >= H || ny < 0 || ny >= W)continue;
                if(Board[nx][ny] == '#')continue;

                if(dist[nx][ny] == -1){
                    que.push(make_pair(nx,ny));
                    dist[nx][ny] = dist[x][y] + 1;
                }

                

            }

        }

        ans = max(now_max,ans);



    }

    cout << ans << endl;
    return 0;





}