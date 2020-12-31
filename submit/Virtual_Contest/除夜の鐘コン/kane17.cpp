#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    vector<vector<char>>A(4,vector<char>(4));
    rep(i,4)rep(j,4)cin >> A[i][j];

    for(int i = 3; i >=0; i--){
        for(int j = 3; j >=0; j--){
            cout << A[i][j];
            if(j == 0)cout << endl;
            else cout << " ";
        }
    }

    return 0;
}