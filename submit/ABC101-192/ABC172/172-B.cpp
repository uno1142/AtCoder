#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,string>;

int main(){
  string S, T;
  cin >> S >> T;
  int size;
  size = (int)S.size();
  
  int ans = 0;
  for(int i=0; i<size; i++){
    if(S.at(i) != T.at(i))ans++;
  }
  cout << ans <<endl;
}