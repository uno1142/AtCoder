#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){
    string t;
    string s;

    cin >> t >> s;

    int slen = (int)s.size();
    int tlen = (int)t.size();

    vector<vector<int>>dp(slen+1,vector<int>(tlen+1 , 0));

    rep(i,1,slen+1)rep(j,1,tlen+1){
        if(s[i-1] == t[j-1])dp[i][j] = dp[i-1][j-1] + 1;
        //文字が異なるときは、どちらかの最後１文字は使わない
        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }

    int i = slen;
    int j = tlen;
  
    string ans;



    while(i > 0 && j > 0){
        if(s[i-1] == t[j-1]){
            ans += s[i-1];
            i--,j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
  	reverse(ans.begin(),ans.end());
  	cout << ans << endl;







}