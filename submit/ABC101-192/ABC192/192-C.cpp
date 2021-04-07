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

ll g2(ll x){
    string S = to_string(x);
    int n = (int)S.size();

    vector<char>A(n);
    rep(i,0,n){
        A[i] = S.at(i);
    }
    sort(A.begin(),A.end());

    string tmp = "";
    rep(i,0,n){
        if(A[i] == '0')continue;
        tmp.push_back(A[i]);
    }
    if(tmp == "")return 0;

    return stoi(tmp);
}

ll g1(ll x){
    string S = to_string(x);
    int n = (int)S.size();

    vector<char>A(n);
    rep(i,0,n){
        A[i] = S.at(i);
    }
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());

    string tmp = "";
    rep(i,0,n){
        tmp.push_back(A[i]);
    }
    if(tmp == "")return 0;

    return stoi(tmp);
}

int main(){
    ll N,K;
  cin >> N >> K;
  
  ll now = N;
  


    while(K > 0){
        K--;
        now = g1(now) - g2(now);


    }
    cout << now << endl;


    
}