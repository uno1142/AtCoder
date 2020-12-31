#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;

    //加算と乗算しかないので、+でつながってる部分をぜんぶ0にしたい
    int cnt = 0;
    bool have_zero = false;

    int ans = 0;

    for(int i = 0; i < (int)S.size(); i++){
        if(S.at(i) == '0')have_zero = true;

        if(S.at(i) == '+'){
            if(have_zero)have_zero = false;
            else ans++;
        }

    
    }
    if(!have_zero)ans++;

    cout << ans << endl;
    return 0;



}