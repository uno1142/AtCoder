#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){
    char a,b;
    cin >> a >> b;
    //小文字のほうが数字おおきい

    if( b - a == 32 )cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
    
}