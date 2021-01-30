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
    int k;
    cin >> k;

    vector<ll>a;

    for(int i = 1; i <= 9; i++)a.push_back(i);
    while(1){
        if(k <= a.size()){
            cout << a[k-1] << endl;
            return 0;
        }

        k -= a.size();
        vector<ll>old;
        swap(a,old);

        for(ll x:old){
            for(int i = -1; i <= 1; i++){
                int d = x%10 + i;
                if(d < 0 || d > 9)continue;
                ll nx = x*10 + d;
                a.push_back(nx);
            }
        }

    }
    return 0;


    
}