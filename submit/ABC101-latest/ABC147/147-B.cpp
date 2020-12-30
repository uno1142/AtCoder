#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    int num = (int)S.size();
    int ans = 0;

    for(int i = 0; i*2 < num ; i++){
        if(S.at(i) != S.at(num - i - 1))ans++;
    }
    cout << ans << endl;
    return 0;
    
}