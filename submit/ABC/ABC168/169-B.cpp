#include<bits/stdc++.h>

using namespace std;

int main(){
  int K;
  cin >> K;
  
  string str;
  cin >> str;
  
  int x = str.size();
  
  if(x <= K ){
    cout << str << endl;
  }
  
  if(x > K){
    for(int i=0; i<x - K; i++){
      str.pop_back();
    }
    
    cout << str << "..." << endl;
    
  }
   

  
}