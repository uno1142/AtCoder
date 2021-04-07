#include<bits/stdc++.h>
#define rep(i,n) for (ll i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  string S;
  cin >> S;
  
  deque<char>d;
  rep(i,S.size()){
    d.push_back(S[i]);
  }
  bool ch1 = true; //反転してたらfalse
  ll n;
  cin >> n;
  rep(i,n){
    ll now;
    cin >> now;
    if(now ==1) ch1 = !ch1;
    else{
      ll f;
      cin >> f;
      if(f == 2){
        f = 0;
      }
      char t;
      cin >> t;
      if(f == ch1){ //f=1かつ反転していないとき
        d.push_front(t); //先頭に
      }
      else{
        d.push_back(t);
      }
    }
  }
  if(ch1){ //反転していないとき
    for(auto itr = d.begin(); itr!=d.end() ; itr++){
      cout << *itr;
    }
  }
  else{ //反転してる
    vector<char>x;
    for(auto itr = d.begin(); itr!=d.end(); itr++){
      x.push_back(*itr);
    }
    reverse(x.begin(),x.end());
    rep(i,x.size()){
      cout << x[i];
    }
    
  }
  cout << endl;
  
}
