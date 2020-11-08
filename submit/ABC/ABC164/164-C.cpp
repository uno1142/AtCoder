#include<bits/stdc++.h>
using namespace std;

int main(){
  set<string> S;
  int N;
  cin >> N;
  string x;
  
  
  for(int i=0; i< N; i++){
    cin >> x;
    S.insert(x);
  }
  
  cout << S.size() << endl;
}