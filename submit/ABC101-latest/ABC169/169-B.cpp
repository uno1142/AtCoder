#include<bits/stdc++.h>
using namespace std;

long long A[100010];

int main(){
  int N;
  cin >> N;
  bool zero = 0;
  for(int i =0; i < N; i++){
    cin>> A[i];
    if(A[i] == 0) zero = 1;//boolがtrue
  }
  if(zero){
    cout << 0 << endl;
    return 0;
  }
  
  long long prod = 1;
  for(int i=0; i<N; i++){
    if(A[i] <= 1000000000000000000 / prod){
      //A[i]が10^18以下の時。書き換えるとprod * A[i] <= 100000000000000000
      prod *= A[i];
    }
    else{
      cout << -1 <<endl;
      return 0;
    }
  }
  
  cout << prod << endl;
    
  
  
}