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

    //方針　最短ルートを求めて、通ってないルートをぜんぶ黒に変える。変えるときにscore++;

    int H,W;
    cin >> H >> W;



    vector<string>Board(H);

    rep(i,H)cin >> Board[i];

    vector<vector<int>> dis(H,vector<int>(W,-1));
    queue<pair<int,int>>que;

    dis[0][0] = 0;
    que.push(make_pair(0,0));

    //探索中各マスはどのマスから来たのかを表す配列
    vector<vector<int>> prev_x(H,vector<int>(W,-1));
    vector<vector<int>> prev_y(H,vector<int>(W,-1));

    //BFS

    while(!que.empty()){
        pair<int,int> current_pos = que.front();
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop();

        for(int dir = 0; dir < 4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(nx < 0 || nx >= H || ny < 0 || ny >= W)continue;
            if(Board[nx][ny] == '#')continue;

            if(dis[nx][ny] == -1){
                que.push(make_pair(nx,ny));
                dis[nx][ny] = dis[x][y]+1;

                prev_x[nx][ny] = x;
                prev_y[nx][ny] = y;

            }
        }
    }
    //たどりつけないときは-1

    if(dis[H-1][W-1] == -1){
        cout << -1 << endl;
        return 0;
    }

    int x = H-1;
    int y = W-1;

    while(x != -1 && y != -1){
        Board[x][y] = 'o';//通った

        int px = prev_x[x][y];
        int py = prev_y[x][y];
        x = px;
        y = py;
    }

    int score = 0;

    //盤面は壁が#、最短経路がoで埋まっているので、.の数が得点

    rep(i,H)rep(j,W){
        if(Board[i][j] == '.')score++;
    }

    cout << score << endl;
    return 0;









}