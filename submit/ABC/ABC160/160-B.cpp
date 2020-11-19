#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin >> N;
  int happy = 0;
  
  while(N >= 500){
    happy += 1000;
    N -= 500;
  }
  while(N  >= 5){
    happy += 5;
    N -=5;
  }
  cout << happy << endl;
}
