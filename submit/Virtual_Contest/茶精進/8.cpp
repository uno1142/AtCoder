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

int main(){
    vector<vector<int>>board(3,vector<int>(3,0));
    rep(i,0,3)rep(j,0,3)cin >> board[i][j];

    //y >= 1において、各x軸のy = 0座標との差は等しくならなければならない

    rep(i,1,3){
        int diff = 1000;
        rep(j,0,3){
            if(diff == 1000)diff = board[i][j] - board[0][j];
            else if(diff != board[i][j] - board[0][j]){
                cout << "No" << endl;
                return 0;
            }

        }
    }

    cout << "Yes" << endl;
    return 0;



}