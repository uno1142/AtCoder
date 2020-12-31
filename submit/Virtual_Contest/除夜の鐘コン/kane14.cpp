#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    vector<int>A(N);
    vector<int>B(N);

    int maxi = 0;
    int ans = 0;

    //一番点数低い人の順位+点数

    rep(i,N){
        cin >> A[i] >> B[i];
        if(maxi < A[i]){
            maxi = A[i];
            ans = A[i] + B[i];
        }

    }
    cout << ans << endl;
    return 0;




}