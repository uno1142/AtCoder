#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    ll N;
    cin >> N;

    ll left = 0;
    ll right = 2e9;

    while(right - left > 1){
        ll mid = (right + left)/2 ;

        if( mid *(mid + 1) / 2 <= N+1) left = mid;
        else right = mid;


    }

    cout << N - left + 1 << endl;
    return 0;

}