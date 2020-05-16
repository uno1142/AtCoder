#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int sum = 0;
  
  vector<int>vec(N,0);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  
  int average_score = sum / N;
  
  for(int j = 0; j< N; j++){
    cout << abs(average_score - vec.at(j)) << endl;
  }
  
}

//さっそくabsを使ってみた　一発で動いて気持ちいい
