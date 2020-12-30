#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int check_digit(int a){
    int ret = 0;
    while(a){
        a /= 10;
        ret++;

    }
    return ret;
}

int main(){
    int N;
    cin >> N;

    int ans = 0;

    for(int i = 1; i <= N; i++){
        int now = check_digit(i);
        if(now %2 == 0)continue;
        else ans++;
        
    }

    cout << ans << endl;
    return 0;

}