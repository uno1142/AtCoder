#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;
    int w;
    cin >> w;

    cout << S.at(0);

    rep(i,(int)S.size() - 1){
        if((i+1)% w == 0 )cout << S.at(i+1);
    }
    cout << endl;
    return 0;



    
}