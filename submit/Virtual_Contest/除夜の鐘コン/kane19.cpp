#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    int a,b;
    cin >> a >> b;

    vector<int>A(a);
    rep(i,a)cin >> A[i];
    vector<int>B(b);
    rep(i,b)cin >> B[i];

    vector<int>pin = {7,8,9,0,4,5,6,2,3,1};

    //-1が入っていたら.を,-2ならoを出力する

    for(int i = 0; i < 10; i++){
        rep(j,a)if (pin[i] == A[j]) pin[i] = -1;
        rep(j,b)if(pin[i] == B[j])pin[i] = -2;
    }

    for(int i = 0; i < 10; i++){
        if(pin[i] == -1)cout << '.';
        else if(pin[i] == -2) cout << "o";
        else cout << "x";

        if(i == 3)cout << endl << " ";
        else if(i == 6)cout << endl << "  ";
        else if(i == 8)cout << endl << "   ";
        else if(i == 9)cout << endl; 
        else cout << " ";


    }
    return 0;

    
}