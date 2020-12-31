#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

bool is_Prime(int n){
    if(n == 1)return false;
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)return false;
    }
    return true;

}



int main(){
    int N;
  	cin >> N;
    int ans = 0;

    for(int i = 1; i < N; i++){
        if(is_Prime(i))ans++;

    }

    cout << ans << endl;
    return 0;



}