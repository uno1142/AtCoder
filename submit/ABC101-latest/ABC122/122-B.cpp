#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    int ans = 0;
    bool flag = false;

    int now = 0;

    for(int i = 0; i < (int)S.size(); i++){
        if(S.at(i) == 'A' || S.at(i) == 'C' || S.at(i) == 'G' || S.at(i) == 'T' ){

            if( flag == true){
                now++;
            }
            else {
                flag = true;
                now = 1;
            }
        }
        else {
            flag = false;
            ans = max(ans,now);
            now = 0;
        }
    }

    ans = max(ans,now);

    cout << ans << endl;
    return 0;
}