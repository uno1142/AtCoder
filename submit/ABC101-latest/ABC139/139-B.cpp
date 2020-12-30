#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int A,B;
    cin >> A >> B;

    int ans = 0;
    int now_s = 1;

    while(now_s < B){
        now_s--;
        ans++;
        now_s += A;

    }

    cout << ans << endl;
    return 0;

}