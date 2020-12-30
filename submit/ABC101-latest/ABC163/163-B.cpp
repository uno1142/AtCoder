#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int>A(N);
  
  for(int i=0; i < M; i++){
    cin >> A[i];
  }
  
  for(int i=0; i <M; i++){ //区切る
    N -= A[i];
    if(N < 0){
      cout  << -1 << endl;
      return 0;
    }
  }
  cout << N <<endl;
}