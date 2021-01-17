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
    vector<int>A(N);
    rep(i,0,N)cin >> A[i];

    int sum = 0;//いったん合計出す
    rep(i,0,N)sum += A[i];

    if(sum % 10 != 0){
        cout << sum << endl;
        return 0;
    }

    sort(A.begin(),A.end());

    rep(i,0,N){
        if((sum - A[i]) % 10 != 0){
            cout << sum - A[i] << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;




}