#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N , K;
  cin >> N >> K;
  N %= K;
  cout << min(N,abs(N -K)) << endl;
}