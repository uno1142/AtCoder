#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){

    int N;
    cin >> N;

    int X;
    cin >> X;

    string S;
    cin >> S;

    int ans = X;


    for(int i = 0;i <N; i++){
        if(S.at(i) == 'o')ans++;
        else if(S.at(i) == 'x' && ans != 0)ans--;

    }

    cout << ans << endl;
    return 0;



  
}