#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N, D;
    cin >> N >> D;

    int area = 2*D + 1;

    cout << N / area + 1 << endl;
    return 0;   
}