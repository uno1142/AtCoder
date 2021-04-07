#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    string S,T;
    cin >> S >> T;
    string X;

    for(int i = 0; i < N; i++){
        X.push_back(S.at(i));
        X.push_back(T.at(i));

    }

    cout << X << endl;
    return 0;

}