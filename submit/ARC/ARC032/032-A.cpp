#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;

bool is_Prime(ll N){
  if(N == 1)return false;
  for(ll i =2; i*i <= N; i++){
    if(N % i == 0)return false;
  }
  return true;
}


int main(){
    int N;
    cin >> N;

    int x = N * (N+1) /2 ;
    if(is_Prime(x))cout << "WANWAN" << endl;
    else cout << "BOWWOW" << endl;

    return 0;


}