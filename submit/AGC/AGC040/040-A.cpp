#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;

    int min_num = 0;
    int max_num = 0;

    int N = (int)S.size();
    vector<int>A(N+1,0);
    rep(i,0,N){
        if(S[i] == '<')A[i+1] = A[i] + 1;
    }
    //逆から見て同じことをする
    for(int i = N-1; i >= 0; i--){
        if(S[i] == '>')A[i] = max(A[i],A[i+1] + 1); 
    }
    ll ans = 0;
    rep(i,0,N+1)ans += A[i];

    cout << ans << endl;
    


    return 0;


}