#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int H ,W , K;
  cin >> H >> W >> K;
  
  vector<string>S(H);
  rep(i,H) cin >> S[i];
  int ans = 0;
  rep(is,1<<H)rep(js,1<<W) {
    int cnt = 0;
    rep(i,H)rep(j,W) {
      if(is>>i&1)continue;
      if(js>>j&1)continue;
      if(S[i][j] == '#')cnt++;
    }
    if(cnt == K)ans++;
  }
  cout << ans << endl;
  
}