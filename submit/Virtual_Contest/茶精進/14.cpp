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
    string a,b,c;
    cin >> a >> b >> c;
    
    //カードの数
    int ac = a.size();

    if(ac == 1){
        cout << "A" << endl;
        return 0;
    }
    int bc = b.size();
    int cc = c.size();

    int anow = 0;
    int bnow = 0;
    int cnow = 0;

    char x = 'a';

    while(true){
        if(x == 'a'){
            
            if(anow == ac){
                cout << "A" << endl;
                return 0;
            }
            x = a[anow];
            anow++;
        }
        else if(x == 'b'){
            
            if(bnow == bc){
                cout << "B" << endl;
                return 0;
            }
            x = b[bnow];
            bnow++;
        }
        else{
            
            if(cnow == cc){
                cout << "C" << endl;
                return 0;
            }
            x = c[cnow];
            cnow++;
        }


    }
    cout << -1 << endl;






}