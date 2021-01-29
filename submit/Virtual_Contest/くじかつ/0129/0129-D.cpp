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
    vector<int>A(N+1);
    rep(i,0,N)cin >> A[i+1];

    vector<int>ans;

    vector<int>ball(200010);

    //大きいほうからうめる
    for(int i = N; i >= 1; i--){
        int sum = 0;
        for(int j = i; j <=N; j += i){
            sum += ball[j];
        }

        if(sum %2 != A[i]){
            ball[i] = 1;
            //出力はボールが入っている箱の番号
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;

    for(auto x:ans)cout << x << " ";
    cout << endl;


}