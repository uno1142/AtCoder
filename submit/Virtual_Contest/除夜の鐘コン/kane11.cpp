#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int>A(N);

    rep(i,N)cin >> A[i];

    ll sum = 0;

    rep(i,N){
        sum += A[i];
        if(sum >= K){
            cout << i + 1 << endl;
            return 0;
        }
    }

}