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

const int INFi = 1e9;


int main(){
    int H,W;
    cin >> H >> W;

    //多点スタートBFS!まえにやった；；

    vector<vector<char>>board(H,vector<char>(W));

    rep(i,0,H)rep(j,0,W)cin >> board[i][j];

    //BFS準備

    vector<vector<int>>dist(H,vector<int>(W,INFi));

    queue<pair<int,int>>que;

    rep(i,0,H)rep(j,0,W){
        if(board[i][j] == '#'){
            que.push(make_pair(i,j));
            dist[i][j] = 0;
        }
    }

    //BFS

    while(!que.empty()){
        auto now = que.front();
        int x = now.first;
        int y = now.second;
        que.pop();

        rep(dir,0,4){

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || nx >= H || ny < 0 || ny >= W)continue;
            if(dist[nx][ny] == INFi){

                que.push(make_pair(nx,ny));
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }

    int ans = 0;

    rep(i,0,H)rep(j,0,W){
        ans = max(ans, dist[i][j]);
    }

    cout << ans << endl;
    return 0;







}