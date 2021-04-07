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

bool solve(string S){
    //一桁なら8だけ
    if(S.size() == 1) return S == "8";
    //二桁ならswapしてみる
    if(S.size() == 2){
        if(stoi(S) % 8 == 0)return true;
        swap(S[0],S[1]);
        return stoi(S) % 8 == 0;  
    }
    //入力に0はない
    vector<int> cnt(10);
    for(char x :S)cnt[x - '0']++;
    for(int i = 112; i < 1000; i+= 8){
        int x = i;
        vector<int>nc(10);
        rep(j,3){
            nc[x % 10]++;
            x /= 10;
        }
        bool ok = true;
        //数字を規定数以上使ってたらだめ
        rep(j,10){
            if(nc[j] > cnt[j]) ok = false;
        }
        if(ok)return true;
    }
    return false;

}

int main(){
    string S;
    cin >> S;

    if(solve(S))cout << "Yes" << endl;
    else cout << "No" << endl;
}