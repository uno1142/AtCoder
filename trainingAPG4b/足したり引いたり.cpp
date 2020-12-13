#include<bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int x = S.size();
  
  int count_p = 0;
  int count_m = 0;
  for(int i=0; i <x; i++){
    if(S.at(i) == '+'){
      count_p++;
    }
    else if(S.at(i) == '-'){
      count_m++;
    }
  }
  cout << count_p - count_m + 1<< endl;
}



//解答例はint answer = 1で書いてif文で++と--をanswerに使ってた。これだとACは出るが無駄が多い
