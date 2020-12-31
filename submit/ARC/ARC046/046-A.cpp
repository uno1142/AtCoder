#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;


int main(){
    int N;
    cin >> N;

    int now = 0;
    int cnt = 0;

    for(ll i = 1; i <= 100000000; i++){
        string S = to_string(i);
        char now = S.at(0);
        bool flag = true;

        rep(j,(int)S.size()){
          if(S.at(j) != now){
            flag = false;
            break;
          }
        }
        
        if(flag)cnt ++;

        if(cnt == N){
            cout << S << endl;
            return 0;
        }

    }

}