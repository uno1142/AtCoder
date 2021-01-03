#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    string a,b;
    cin >> a >> b;

    int x=0;
    int y = 0;

    rep(i,3){
        x += a.at(i) - '0';
        y += b.at(i) - '0';
        

    }

    cout << max(x,y) << endl;
    return 0;



}