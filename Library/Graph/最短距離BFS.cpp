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

    int R,C;
    cin >> R >> C;

    //スタートとゴールの座標
    int sx,sy,tx,ty;
    cin >> sx >> sy >> tx >> ty;
  	//0-indexed
  	sx--,sy--,tx--,ty--;

    //盤面。

    vector<vector<char>>Board(R,vector<char>(C));
    rep(i,R)rep(j,C){
        cin >> Board[i][j];
    }

    //各マスの最短距離 -1で初期化
    vector<vector<int>> dist(R,vector<int>(C,-1));
    dist[sx][sy] = 0;

    queue<pair<int,int>> que;
    que.push(make_pair(sx,sy));

    while(!que.empty()){
        pair<int,int> current_pos = que.front();
        que.pop();
        int x = current_pos.first;
        int y = current_pos.second;

        //隣接頂点を探索
        for(int dir = 0; dir < 4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            //盤面の外を除外
            if(nx < 0 || nx >= R || ny < 0 || ny >= C)continue;
            //壁も
            if(Board[nx][ny] == '#')continue;

            if(dist[nx][ny] == -1){
                que.push(make_pair(nx,ny));
                dist[nx][ny] = dist[x][y] + 1;

                if(nx == tx && ny == ty){
                    cout << dist[nx][ny] << endl;
                    return 0;
                }
            }
        }
    }

    cout << "error" << endl;
    return 0;






}