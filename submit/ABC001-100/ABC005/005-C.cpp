#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){

    //0-1BFS練習

    int H,W;
    cin >> H >> W;

    vector<string>Board(H);
    rep(i,H)cin >> Board[i];
    //スタートとゴールの座標
    int sx,sy,tx,ty;

    rep(i,H)rep(j,W){
        if(Board[i][j] == 's')sx = i,sy = j;
        if(Board[i][j] == 'g')tx = i,ty = j;
    }

    vector<vector<int>> dist(H,vector<int>(W,-1));
    deque<pair<int,int>> que;

    que.push_back(make_pair(sx,sy));
    dist[sx][sy] = 0;

    while(!que.empty()){
        pair<int,int>current_pos = que.front();
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop_front();

        rep(i,4){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= H || ny < 0 || ny >= W)continue;
            //普通に通れるなら、距離を足さないでおく
            if(Board[nx][ny] != '#' && dist[nx][ny] == -1){
                que.push_front(make_pair(nx,ny));
                dist[nx][ny] = dist[x][y];

            }

            //壁で、かつ壊さないと通れないとき距離を足す。
            else if(dist[nx][ny] == -1){
                que.push_back(make_pair(nx,ny));
                dist[nx][ny] = dist[x][y]+1;
            }
        }
    }

    if(dist[tx][ty] <= 2)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;



}