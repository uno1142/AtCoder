#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){
    char X;
    cin >> X;
    string S;
    cin >> S;

    for(int i = 0; i < (int)S.size(); i++){
        if(S.at(i) == X)continue;
        cout << S.at(i);
    }
    cout << endl;
    return 0;
}