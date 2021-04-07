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

    int sx,sy;
    cin >> sx >> sy;

    int tx,ty;
    cin >> tx >> ty;

    //0-indexed
    sx--,sy--,tx--,ty--;

    vector<string>Board(H);
    rep(i,H)cin >> Board[i];

    //テレポートした回数を入れていく。infで初期化

    vector<vector<int>>tele(H,vector<int>(W,INF));
    deque<pair<int,int>> que;

    que.push_back(make_pair(sx,sy));
    tele[sx][sy] = 0;

    while(!que.empty()){
        pair<int,int>current_pos = que.front();
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop_front();

        //まずは歩いて行けるところを埋める。その時のテレポート回数をnowにいれる
        int now = tele[x][y];

        rep(i,4){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= H || ny < 0 || ny >= W)continue;
            if(Board[nx][ny] == '#')continue;
            if(tele[nx][ny] <=now)continue;
            tele[nx][ny] = now;
            que.push_front(make_pair(nx,ny));
        }

        //5*5を見てqueの後ろに入れる

        for(int dirx = -2; dirx <= 2; dirx++){
            for(int diry = -2; diry <=2; diry++){
                int px = x + dirx;
                int py = y + diry;
                if(px < 0 || px >= H || py < 0 || py >= W)continue;
                if(Board[px][py] == '#')continue;
                //ワープ回数がnow+1以下なら重複/テレポートしなくていい場所の回数が増えてしまうのでスキップする
                if(tele[px][py] <= now + 1)continue;
                tele[px][py] = now + 1;
                que.push_back(make_pair(px,py));

            }
        }


    }

    int ans = tele[tx][ty];
    if(ans == INF)ans = -1;
    cout << ans << endl;
    return 0;






}