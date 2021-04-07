#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int cal_digit(ll X){
  int count = 0;
  while(X){
    X/= 26;
    count++;
  }
  return count;
}

int main(){
  ll N;
  cin >> N;
  int x = cal_digit(N);
  
  vector<ll>A(x); //26進数の桁数ぶんの配列
  
  for(int i = 0; i<x; i++){

    A[i] = N % 26;
    N /= 26;
  }
  
  for(int i = 0; i< x; i++){
    if(A[i] <= 0){
      
      if(i == x-1){
        A[i] = 26;
        A.pop_back();
        x--;
        break;
      }
      A[i] += 26;
      A[i+1]--;
    }

    
  }

  reverse(A.begin(), A.end());
  
  for(int i = 0; i < x; i++){
    char x;
    x = A[i] + 96;
    cout << x;
  }
  
  cout << endl;
  
}