#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;

    char a1,b1;
    a1 = a + '0';
    b1 = b + '0';

    string x;
    rep(i,b)x.push_back(a1);
    string y;
    rep(i,a)y.push_back(b1);

    if( x > y)cout << y << endl;
    else cout << x << endl;

    return 0;


}