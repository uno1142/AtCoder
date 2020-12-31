#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    getline(cin,S);

    bool streak = false;

    rep(i,(int)S.size()){
        

        if(S.at(i) != ' ' && streak){
            streak = false;
            cout << ',' << S.at(i);
        } 
        else if(S.at(i) == ' ')streak = true;
        else cout << S.at(i);
    }

    cout << endl;
    return 0;
}