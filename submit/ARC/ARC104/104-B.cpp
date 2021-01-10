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
    string S;
    cin >> S;
    //A<->T  C <-> G

    int ans = 0;

    for(int i = 0; i <= N; i++){
        //charをASCIIコードで扱う
        vector<int>cnt(100,0);
        for(int j = i+1; j <= N; j++){
            cnt[S[j-1]]++;

            if(cnt['A'] == cnt['T'] && cnt['C'] == cnt['G'] )ans++;
        }

    }
    cout << ans << endl;
    return 0;
}