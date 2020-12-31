#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int W,H,N;
    cin >> W >> H >> N;
    vector<int>X(N);
    vector<int>Y(N);
    vector<int>A(N);

    rep(i,N)cin >> X[i] >> Y[i] >> A[i];

    vector<vector<int>>Field(H,vector<int>(W,-1));



    rep(k,N){
        //盤面にアクセス
        for(int i = H-1; i >=0; i--)for(int j = 0; j <W; j++){
            if(Field[i][j] != -1)continue;

            if(A[k]== 1 && j < X[k]) Field[i][j] = 1;
            else if(A[k] == 2 && j >= X[k]) Field[i][j] = 1;
            else if(A[k] == 3 && i < Y[k]) Field[i][j] = 1;
            else if(A[k] == 4 && i >= Y[k]) Field[i][j] = 1; 

        }



    }

    int ans = 0;

    rep(i,H)rep(j,W){
        if(Field[i][j] == -1) ans++;
    }

    cout << ans << endl;
    return 0;


}