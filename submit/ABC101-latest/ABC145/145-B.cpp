#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    string S;
    cin >> N >> S;

    string A,B;

    if(N%2 != 0){
        cout << "No" << endl;
        return 0;

    }


    for(int i = 0; i < N/2; i++){
        A.push_back(S.at(i));
    }
    for(int i = N/2; i < N; i++){
        B.push_back(S.at(i));
    }

    rep(i,N/2){
        if(A.at(i) != B.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;

}