#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int N;
  cin >> N;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  string S;
  rep(i,N){
    cin >> S;
    if(S == "AC")a++;
    if(S == "WA")b++;
    if(S == "TLE")c++;
    if(S == "RE")d++;
  }
  cout << "AC" << " " << "x" << " " << a << endl;
  cout << "WA" << " " << "x" << " " << b << endl;
  cout << "TLE" << " " << "x" << " " << c << endl;
  cout << "RE" << " " << "x" << " " << d << endl;
}