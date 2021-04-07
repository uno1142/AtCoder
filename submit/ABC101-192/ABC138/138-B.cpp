#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<double>A(N);
    rep(i,N)cin >> A[i];

    double sum = 0;

    rep(i,N){
        sum += 1 / A[i];
    }

    cout << fixed <<  setprecision(6) <<1 / sum << endl;



}