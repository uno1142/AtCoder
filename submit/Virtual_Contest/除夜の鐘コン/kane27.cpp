#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];

    int sum = 0;
    rep(i,N)sum+= A[i];

    //sumとA[i]*Nを比較する
    int min_diff = 1000000000;
    rep(i,N){
        min_diff = min(min_diff, abs(sum - N * A[i]) );

    }

    rep(i,N){
        if(min_diff == abs(sum - N * A[i]) ){
            cout << i << endl;
            return 0;
        }
    }



}