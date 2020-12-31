#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    ll N;
    cin >> N;

    ll sum = 0;

    for(ll i= 1; ;i++){
        sum += i;
        //ぴったりならそれでいいし、行き過ぎた場合も1や2で止まればいいのでこの時間が最短
        if(sum >= N){
            cout << i << endl;
            return 0;
        }

    }

}