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

    //対象となる平面上のすべての格子点について、その点と原点との距離がR以下であるか判定しカウント

    double x,y,r;

    int xleft = floor(x-r);
    int xright = ceil(x+r);

    int yup = ceil(y+r);
    int ylow = floor(y-r);

    ll ans = 0;


    //格子点としてあり得る一番端っこの座標

    for(int i = xleft; i < xright; i++){
        for(int j = ylow; j < yup; j++){
            //円の中心から点(i,j)までの距離がr以下ならans++;

            if( (x - i)*(x - i) + (y - j)*(y - j) <= r * r) ) ans++;
        }
    }

    cout << ans << endl;
    







    
}