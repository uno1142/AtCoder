#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    int N,M;
    cin >> N >> M;

    vector<pair<int,int>>coo(N);
    vector<pair<int,int>>check(M);

    rep(i,0,N)cin >> coo[i].first >> coo[i].second;
    rep(i,0,M)cin >> check[i].first >> check[i].second;

    //各学生について、チェックポイントを全探索しても間に合う

    rep(i,0,N){
        int x = coo[i].first;
        int y = coo[i].second;

        ll dist = INF;
        int index = -1;
        rep(j,0,M){
            //チェックポイントの番号を出力するとき+1する
            int x2 = check[j].first;
            int y2 = check[j].second;

            int now = abs(x - x2) + abs(y - y2);
            if(now < dist){
                dist = now;
                index = j+1;
            }
        }
        cout << index << endl;
    }
    return 0;

}