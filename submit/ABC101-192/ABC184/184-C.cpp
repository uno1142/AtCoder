#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int r = r2 - r1;
    int c = c2 - c1;
    
    int ans = 3; //最大でも3手；
    if (r == 0 && c == 0)ans = 0; //移動しない、0手
    else if(r == c || r == -c || abs(r) + abs(c) <=3)ans = 1; //斜めか距離3マスいないなら1手
    else if( (r ^ c ^ 1) & 1 || abs(r+c) <= 3 || abs(r-c) <=3 || abs(r) + abs(c) <= 6)ans = 2;
    //パリティ上(斜め移動2で行ける)、距離が６マス以内なら２手

    cout << ans << endl;
    return 0;



  
}