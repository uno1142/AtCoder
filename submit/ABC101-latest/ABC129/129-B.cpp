#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;


int main(){

    int N;
    cin >> N;

    vector<int>A(N);


    rep(i,N)cin >> A[i];

    int sum = 0;
    rep(i,N)sum += A[i];


    int ans = 100000000;


    for(int i = 0; i < N ; i++ ){
        int s1 = 0;
        int s2;

        for(int j = 0; j <= i;j++){
            s1 += A[j];
        }

        s2 = sum - s1;

        ans = min(ans, abs(s1 - s2));

    }
    cout << ans << endl;
    return 0;



}