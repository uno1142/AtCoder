#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

//グローバルで宣言
vector<vector<int>>Board(101,vector<int>(101,0));
int H,W;

//dh,dwを用意
int dh[4] = {0,1,0,-1};
int dw[4] = {1,0,-1,0};

void dfs(int h, int w,int& area,int& coast){
    Board[h][w] = 2;

    for(int i = 0; i < 4; i++){
            int nh = h + dh[i], nw = w + dw[i];

            //場外判定
            if(nh < 0 || nh >= H || nw < 0 || nw >= W){
                continue;
            }
            //探索済みの陸地
            if(Board[nh][nw] == 2){
                coast--;
                continue;
            }
      		//海
      		if(Board[nh][nw] == 0)continue;
      
      		area ++;
      		coast += 3;

            //再帰
            dfs(nh,nw,area,coast);

        }

}


int main(){

    cin >> H >> W;
    Board.resize(H);
    vector<pair<int,int>>Islands;

    for(int i = 0; i < H; i++){
        string S;
        cin >> S;
        for(int j = 0; j < W; j++){
            if(S.at(j) == '#')Board[i][j] = 1;
            else Board[i][j] = 0;
        }
    }
    for(int h = 0; h < H; h++){
        for(int w = 0; w < W; w++){
            if(Board[h][w] == 0 || Board[h][w] == 2)continue;
            int area = 1;
            int coast = 4;
            dfs(h,w,area,coast);
            Islands.push_back(make_pair(area,coast));
        }
    }
  	sort(Islands.begin(),Islands.end());
  	reverse(Islands.begin(),Islands.end());


    for(auto x:Islands){
        cout << x.first << " " << x.second << endl;
    }

    return 0;






}