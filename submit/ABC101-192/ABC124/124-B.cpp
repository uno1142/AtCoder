#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int>H(N);
    rep(i,N)cin >> H[i];

    int max_num = H[0];

    int ans = 1;

    for(int i = 1; i < N; i++){
        if(H[i] >= max_num){
            ans++;
            max_num = H[i];
        }
    }
    cout << ans << endl;
    return 0;


}