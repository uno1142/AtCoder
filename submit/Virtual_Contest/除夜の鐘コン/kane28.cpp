#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;
    int N = (int)S.size();
    bool I = false;
    bool C = false;
    bool T = false;

    rep(i,N){
        if(!I && S.at(i) == 'I')I =true;
        else if(!I && S.at(i) == 'i')I =true;

        else if(I && !C && S.at(i) == 'C')C = true;
        else if(I && !C && S.at(i) == 'c')C = true;

        else if(I && C && !T && S.at(i) == 'T')T = true;
        else if(I && C && !T && S.at(i) == 't')T = true;
    }

    if(T)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}