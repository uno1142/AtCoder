#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b == 0)return a;
  else return gcd(b, a%b);
}

int main(){
  int K;
  cin >> K;
  int sum = 0;
  for(int i = 1; i <= K; i++){
    for(int j = 1; j <= K; j ++){
      for(int j2 = 1; j2 <= K; j2++){
        sum += gcd(i,gcd(j,j2));
      }
    }
  }
  cout << sum <<endl;
}
 