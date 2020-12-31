#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    int W;
    cin >> W;

    int now = 0;

    for(int i = 0; i < (int)S.size(); i++){
        cout << S.at(i);
        if(now+1 == W){
            cout << endl;
            now = 0;
        }
        else now++;
    }
    if(51 % W != 0)cout << endl;

    return 0;


}