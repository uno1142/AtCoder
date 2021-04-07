#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;

    //(sx,sy)と(gs,-gy)を通る直線とx軸の交点

    double ans = (sx*gy + gx* sy) / (sy + gy);

    cout << fixed <<  setprecision(10) << ans << endl;

}