#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,string>;

int main(){
  ll N;
  cin >> N;
  
  vector<ll>A(N);
  rep(i,N)cin >> A[i];
  
  ll Q;
  cin >> Q;
  ll B,C;
  vector<int>HowMany(100000); //各数字が何個配列に入っているか
  rep(i,N){
    HowMany[A[i]]++;
  }
  
  ll sum = 0;
  rep(i,N){
    sum += A[i];
  }
  
  //この時点でsumには初期値が入っている
  
  rep(i,Q){ //クエリぶん処理
    cin >> B >> C;
    sum += (C - B) *HowMany[B];
    HowMany[C] += HowMany[B];
    HowMany[B] = 0;
    
    cout << sum << endl;
  }
}