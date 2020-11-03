#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int>price(N);
  for(int i = 0; i <N; i++){
    cin >> price[i];
  }
  sort(price.begin(),price.end());
  ll ans = 0;
  for(int i = 0; i < K; i++){
    ans += price[i];
  }
  cout << ans << endl;
}