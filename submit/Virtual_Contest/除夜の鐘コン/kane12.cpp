#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << abs(a-c) + abs(b-d) +1 << endl;
    return 0;

}