#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    string S;
    cin >> S;
    int half = (int)S.size()/2;
    for(int i = 0; i <= half; i++){
        if(S.at(i) == S.at((S.size() - i-1)) || S.at(S.size() - i-1) == '*' || S.at(i) == '*')continue;
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
    
}