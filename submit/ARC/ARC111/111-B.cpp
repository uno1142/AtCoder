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


    set<int>A;
    set<int>B;

    rep(i,N){
        int a,b;
        cin >> a >> b;
        if(A.count(a))A.insert(b);
        else A.insert(a);

        if(B.count(b))B.insert(a);
        else B.insert(b);

    }

    cout << max(A.size(),B.size()) << endl;





}