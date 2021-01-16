#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;
    ll K = 0;
  	cin >> K;

    int N = S.size();

    if(N == 1){
        cout << S.at(0) << endl;
        return 0;
    }

    int one_num = 0;
  
  	int ans = 0;

    rep(i,0,N){
        if(S.at(i) == '1')one_num++;
        else{
          ans = S.at(i) - '0'; 
          break;
        }
    }
    //Kよりも1の数の方が多い場合は、1

    if( one_num - K >= 0)cout << 1 << endl;
    else cout << ans << endl;

    return 0;
}