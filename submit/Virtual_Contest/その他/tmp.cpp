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

    int N,X;
    cin >> N >> X;

    int min_val = 1e9;
    int max_val = 0;

    //input 初距離,初運賃,加算距離,加算運賃

    rep(i,0,N){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int tmp = 0;

        if(X < a){
            tmp = b;
        }
        else{
            tmp = b;
            X -= a;

            int cnt = 1;
            while(X > 0){
                X -= a;
                cnt++;
            }
            tmp += d * cnt;
        }
        min_val = min(min_val,tmp);
        max_val = max(max_val,tmp);
    }

    cout << min_val << " " << max_val << endl;
    return 0;







}