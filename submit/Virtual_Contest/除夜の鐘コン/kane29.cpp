#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    int a = N / 10;
    int b = N % 10;

    //7個以上買うなら10個買う
    if(b >= 7)cout << (a+1) * 100 << endl;
    else cout << a * 100 + b * 15 << endl;
    return 0;
}