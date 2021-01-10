#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
const int INF = 1e9;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int digit_sum(ll n){
   if(n < 10)  return n;
   return digit_sum(n/10) + n%10;
}

bool is_Prime(ll N){
  if(N == 1)return false;
  for(ll i =2; i*i <= N; i++){
    if(N % i == 0)return false;
  }
  return true;
}

bool is_Prime_like(ll N){
    if(is_Prime(N))return true;

    int a = N % 10;
    if(a%2 == 0 || a == 5)return false;

    if(digit_sum(N) % 3 != 0)return true;

    return false;
}

int main(){
    int N;
    cin >> N;

    if(N == 1){
        cout << "Not Prime" << endl;
        return 0;
    }

    if(is_Prime_like(N))cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
    return 0;


}