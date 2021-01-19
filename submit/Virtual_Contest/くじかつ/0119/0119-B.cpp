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
    char a,b;
    cin >> a >> b;

    if( a == 'H'){
        //aは正直者

        if( b == 'H')cout << "H" << endl;
        else cout << "D" << endl;
    }
    else {
        //aが嘘ついてる
        
        if(b == 'H')cout << "D" << endl;
        else cout << "H" << endl;
    }
    return 0;

}