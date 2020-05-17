#include<bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >>X ;
  
  vector<int>vec(X);
  for(int i =0; i< X ; i++){
  cin >> vec.at(i);
  }
  
  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());
  
  
  cout << vec[0] - vec[X-1] << endl;
}

//　X人　身長S1,S2,S3…といった入力で最も身長が高い人と低い人の差を出力する。
