#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

int main(){
    string S;
    cin >> S;

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a--,b--,c--,d--;
    if(a == -1)cout << '"';

    for(int i = 0; i < (int)S.size(); i++){
        cout << S.at(i);
        if(i == a || i == b || i == c || i == d){
            cout << '"'; 
        }
         
    }
    cout << endl;
    return 0;
    
}