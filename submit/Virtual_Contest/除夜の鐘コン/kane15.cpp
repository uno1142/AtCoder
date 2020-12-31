#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;

    //２回xするほうが階段降りるより早いとき、斜め→横移動が早い

    if(x*2 < y) y = 2 * x;

    if(a > b)cout << x + (a-b - 1)*y << endl;
    else cout << x +(b-a)*y << endl;
    return 0;



}