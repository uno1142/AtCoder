#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 998244353;

int main(){

    vector<int>A(4);
    rep(i,4)cin >> A[i];
    sort(A.begin(), A.end());

    if(A[0] + A[3] == A[1] + A[2] || A[0] + A[1] + A[2] == A[3]){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;

}