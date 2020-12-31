#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;

    for(int i = 0; i < (int)S.size(); i++){
        if(S.at(i) == 'O' || S.at(i) == 'D')S.at(i) = '0';
        else if(S.at(i) == 'I')S.at(i) = '1';
        else if(S.at(i) == 'Z')S.at(i) = '2';
        else if(S.at(i) == 'S')S.at(i) = '5';
        else if(S.at(i) == 'B')S.at(i) = '8';
    }

    cout << S << endl;
    return 0;



}