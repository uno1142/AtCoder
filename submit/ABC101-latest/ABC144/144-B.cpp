#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;

    if(N == 0 || N == 100){
        cout << "No" << endl;
        return 0;
    }

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(i * j == N){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;

}