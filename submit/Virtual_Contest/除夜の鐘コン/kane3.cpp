#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int>M(N);
    rep(i,N)cin >> M[i];

    int ans = 0;

    rep(i,N){
        if(M[i] < 80)ans += 80 - M[i];
    }

    cout << ans << endl;
    return 0;
    


}