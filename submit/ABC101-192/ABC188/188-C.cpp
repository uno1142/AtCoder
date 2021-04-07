#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){
    int N;
    cin >> N;

    int n = pow(2,N);
    n /= 2;

    vector<ll>A(n);
    vector<ll>B(n);

    rep(i,n)cin >> A[i];
    rep(i,n)cin >> B[i];

    ll index_a = 0;
    ll max_a = 0;
    ll index_b = 0;
    ll max_b = 0;

    rep(i,n){
        if(A[i] > max_a){
            max_a = A[i];
            index_a = i+1;
        }
    }
    rep(i,n){
        if(B[i] > max_b){
            max_b = B[i];
            index_b = n + i + 1;
        }
    }
  

    if(max_a > max_b)cout << index_b << endl;
    else cout << index_a << endl;
    return 0;
    
}