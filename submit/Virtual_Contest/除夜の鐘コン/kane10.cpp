#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;

    string ans = "";

    for(int i = 0 ; i < (int)S.size(); i++){
        if(S.at(i) >= '0' && S.at(i) <= '9'){
            ans.push_back(S.at(i));


            if(i != (int)S.size()-1){
                if(S.at(i+1) >= '0' && S.at(i+1) <= '9')ans.push_back(S.at(i+1));
                break;
            }
        }
    }

    cout << ans << endl;
}