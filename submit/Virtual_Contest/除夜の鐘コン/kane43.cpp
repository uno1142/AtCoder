#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    ll A,B,K,L;
    cin >> A >> B >> K >> L;

    // A：ばらうり B:L個のセット

    ll sum = 0;

    //前提 セットのほうが安い　バラが安いならこれ
    if(A*L <= B ){
        cout << A * K << endl;
        return 0;

    }


    while(K > 0){
        if( K >= L){
            sum += B;
            K -= L;
        }
        else if( A*K >= B){
            sum += B;
            K -=L;

        }
        else {
            sum += A;
            K--;
        }

    }

    cout << sum <<endl;
    return 0;

}