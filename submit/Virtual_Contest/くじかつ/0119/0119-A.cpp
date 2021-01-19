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
    int N;
    cin >> N;
    int x = N % 10;

    if(x == 2 || x == 4 || x == 5 || x == 7 || x == 9)cout << "hon" << endl;
    else if(x == 3)cout << "bon" << endl;
    else cout << "pon" << endl;
    return 0;

}