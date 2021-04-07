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
    string S;

    cin >> S;
    //読みにくいとtrue
    bool ans = true;

    for(int i = 0; i < (int)S.size(); i++){
        if(i % 2 == 0){
            if(S.at(i) >= 'A' && S.at(i) <= 'Z'){
                ans = false;
                break;
            }
        }
        else {
            if(S.at(i) >= 'a' && S.at(i) <= 'z'){
                ans = false;
                break;
            }
        }
    }

    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;

    
}