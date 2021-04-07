#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll H,N;
    cin >> H >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());

    rep(i,N){
        H -= A[i];
        if( H <= 0){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;


}