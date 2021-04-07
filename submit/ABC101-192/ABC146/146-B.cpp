#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int num = (int)S.size();

    rep(i,num){
        if(S.at(i) + N > 'Z'){
            S.at(i) += N - 26;
        }
        else S.at(i) += N;
    }

    cout << S << endl;
}