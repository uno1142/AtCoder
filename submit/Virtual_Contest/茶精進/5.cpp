#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    //なんとなく100 * 100までの範囲でいい気がする

    for(int i = B; i < 10000; i+= B){
        int now = i + C;

        if(now % A == 0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;






}