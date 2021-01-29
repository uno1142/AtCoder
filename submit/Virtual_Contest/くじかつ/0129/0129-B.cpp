#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

int main(){

    string S;
    cin>> S;

    int a = 0;
    int b = 0;


    for(int i = 0; i < (int)S.size(); i++){
        if(S[i] == '0')a++;
        else b++;
    }

    cout << min(a,b) * 2 << endl;
    
}
