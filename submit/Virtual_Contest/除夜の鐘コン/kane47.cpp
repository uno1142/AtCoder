#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int>A(N);
    rep(i,N)cin >> A[i];

    vector<int>score(M+1,0);

    rep(i,N){
        score[A[i]]++;
    }

    for(int i = 0; i <= M; i++){
        if(score[i] *2 > N ){
            cout << i << endl;
            return 0;
        }
    }

    cout << '?' << endl;
    return 0;

}