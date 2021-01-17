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

    vector<int>num(100010,0);

    //-1もあり得る。0の前に-1をいれてあげる →追記よく考えたらありえんわ

    rep(i,0,N){
        num[A[i]]++;
        num[A[i]+1]++;
        num[A[i]+2]++;
    }

    int max_num = 0;

    rep(i,0,100002){

        if(num[i] > max_num){
            max_num = num[i];
        }

    }

    cout << max_num << endl;
    return 0;


}