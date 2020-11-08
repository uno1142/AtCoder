#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); i++)

int n,m,q;
vector<int> a,b,c,d;
int ans;


void dfs(vector<int>A){
  //終了ステップは、配列Aの長さがn+1になったとき。(配列が完成)
  if((int)A.size() == n+1){
    // calc score
    int now = 0;
    rep(i,q){ //クエリ分処理
      if(A[b[i]] - A[a[i]] == c[i])now += d[i];
    }
    ans = max(ans,now);//最大値更新
    return; //返す。
    //イメージとしてはn=3,m=3で、[1,1,1]→dfs→[1,1,2]→dfs→[1,1,3](ここでwhile文を抜けて[1,1]にreturn,末尾がインクリされて[1,2]→[1,2,2]→dfs→[1,2,3]([1,2]にreturnして[1,3])])
  }
  A.push_back(A.back());
  while(A.back() <= m){ //末尾の要素がmになったらループを抜ける。
    dfs(A);
    A.back()++;
  }
}

int main(){
  cin >> n >> m >> q;
  a = b = c = d = vector<int>(q);
  rep(i,q){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  dfs(vector<int>(1,1));
  cout << ans << endl;
}