#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){

    int K;
    cin >> K;
    vector<int> A(1000001);
    //Kで割り切れるかの判定なら、Kでmodをとっても結果は変わらない

    A[1] = 7%K;
    for(int i = 2; i <=K ; i++)A[i] = (A[i-1] * 10 + 7)%K;

    for(int i = 1; i <= K; i++){
        if(A[i] == 0){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;

}