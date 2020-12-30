#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << min(a,min(b,min(c,d)) ) << endl;
    

}