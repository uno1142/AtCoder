#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    string S;
    cin >> S;

    int even = 0;
    int odd = 0;

    int N = (int)S.size();
    //桁数

    if( N % 2 == 0){
        //偶数、S.at(0)が偶数桁
        rep(i,N){
            if(i % 2 == 0){
                even += S.at(i) - '0';
            }
            else odd += S.at(i) -'0';
        }
    }
    else{
        rep(i,N){
            if(i % 2 == 0){
                odd += S.at(i) - '0';
            }
            else even += S.at(i) - '0';
        }
    }

    cout << even << " " << odd << endl;
    return 0;
    



}