#include <bits/stdc++.h>
using namespace std;

int main(){
  int A , B ,C ,K;
  cin >> A >> B >> C >> K;
  
  if( K <= A){
    cout << K << endl;
  }
  else if( K <= A + B){
    cout << A << endl;
  }
  else{ //ﾏｲﾅｽ含むとき
    cout << A - (K - A - B) << endl; //合計AからK -(A + B)した枚数ぶん-1の札をとる 
  }
}