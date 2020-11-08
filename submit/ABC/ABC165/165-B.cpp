#include<bits/stdc++.h>
using namespace std;

int main(){
  long long X;
  cin >> X;
  
  long long prod = 100;
  int count = 0;
  
  while( X > prod){
    prod += prod / 100;
    count++;
  }
  cout << count << endl;
}