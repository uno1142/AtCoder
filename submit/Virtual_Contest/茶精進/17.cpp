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
    vector<int>atoz(26,0);//a~zまでの文字が何文字あったか
    

    vector<string>S(N);
    rep(i,0,N){
        cin >> S[i];
    }
    string z = S[0];
    rep(i,0,(int)z.size()){
        atoz[z[i] - 'a']++;
    }

    rep(i,1,N){
        vector<int>atoz_2(26,0);
        rep(j,0,(int)S[i].size()){
            atoz_2[S[i][j] - 'a']++;
        }

        rep(j,0,26){
            if(atoz[j] > atoz_2[j])atoz[j] = atoz_2[j];
        }
    }

    string ans = "";

    rep(i,0,26){
        rep(j,0,atoz[i]){
          char x = i+'a';
          ans.push_back(x);
        }
    }

    cout << ans << endl;
    

}