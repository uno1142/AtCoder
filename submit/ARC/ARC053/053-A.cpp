#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){
    int H,W;
    cin >> H >> W;

    //1列につきW-1通り
    //1行につきH-1

    cout << H * (W-1) + W * (H-1) << endl;
    return 0;


}