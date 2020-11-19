#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  int A[N];
  double sum = 0;
  
  for(int i =0; i<N; i++){
    cin >> A[i];
    sum += A[i];
  }
  sum /= 4 *M;  
  int count = 0;
  for(int i =0; i<N; i++){
    if(A[i] >= sum)count++;
  }
  if(count >= M)cout<< "Yes"<< endl;
  else cout << "No" << endl;
}