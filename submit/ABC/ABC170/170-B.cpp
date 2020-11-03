#include<bits/stdc++.h>
#define rep(i,n) for (ll i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int X, Y;
  cin >> X >> Y;
  int a;
  for(int i = 0; i <=100; i++){
    for(int j = 0; j <= 100; j++){
      a = 2* i + 4 * j;
      if(Y == a && i+j == X){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}