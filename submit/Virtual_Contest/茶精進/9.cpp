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
    int N;
    cin >> N;

    vector<int>A(N+1);
    //A[0]はつかわない

    rep(i,1,N+1) cin >> A[i];

    int i = 1;
    int ans = 0;

    set<int>used;

    while(A[i] != i){
        ans++;
        if(used.count(i))break;
        used.insert(i);
        i = A[i];

        if(i == 2){
            cout << ans << endl;
            return 0;
            
        }
    }

    cout << -1 << endl;


}