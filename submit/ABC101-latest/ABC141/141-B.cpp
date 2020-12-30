#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    for(int i = 0; i < (int)S.size(); i++){
        if(S.at(i) == 'U' || S.at(i) == 'D')continue;

        if(i %2 == 0 && S.at(i) != 'R'){
            cout << "No" << endl;
            return 0;
        }
        else if(i%2 == 1 && S.at(i) != 'L'){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}