#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;


int main(){
    int N;
    cin >> N;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    int max_num = 0;
    int ans = -1;

    for(int k = 2; k <= 1000; k++){
        int now = 0;
        rep(i,N){
            if(A[i] % k == 0)now++;
        }
        if(max_num < now){
          max_num = now;
          ans = k;
        }

    }
    cout << ans << endl;

}