#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int>X(M);
    rep(i,M)cin >> X[i];

    sort(X.begin(),X.end());


    //2点間の距離の配列
    vector<int>dis(M-1);

    rep(i,M-1){
        dis[i] = abs (X[i+1] - X[i]);
    }
    sort(dis.begin(),dis.end());

    int ans = 0;

    for(int i = 0; i < M - 1 - N; i++){
        ans += dis[i];

    }

    cout << ans << endl;
    return 0;









}