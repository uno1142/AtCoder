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

    double sum = 0;
    rep(i,N-1){
        sum += A[i+1] - A[i];  

    }

    cout << fixed << setprecision(16) << sum / (N-1) << endl;
    return 0;


}