#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    int N,M;
    cin >> N >> M;

    

    vector<int>A(M);
    vector<int>B(M);

    rep(i,0,M)cin >> A[i] >> B[i];


    int K;
    cin >> K;

    vector<int>C(K);
    vector<int>D(K);
    rep(i,0,K)cin >> C[i] >> D[i];

    int ans = 0;

    //各Kにおいて、Ciを取る(0)かDiを取る(1)かを全探索する
    //Kは1~Kなので

    for(int bit = 0; bit < (1 << K); bit++){

        int sum = 0;

        vector<int>dish(N,0);
        //まずは皿を埋める
        for(int k = 0; k < K; k++){
            if(bit & (1 << k)){
                dish[C[k]-1]++;
            }
            else dish[D[k]-1]++;
        }

        rep(i,0,M){
            if(dish[A[i]-1] >= 1 && dish[B[i]-1] >= 1)sum++;
        }

        ans = max(sum,ans);
    }

    cout << ans << endl;




    
}