#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main(){
  const double pi = acos(-1);
  long double a,b,h,m;
  cin >> a >> b >> h >> m;
  
  long double x;
  x =a*a + b*b - 2*a*b*cos(2*pi - abs( h*(2*pi/12)+ (long double)m*2*pi/60/12 - (long double)m*pi/30 ));
  x = sqrtl(x);
  
  cout << setprecision(11) << x << endl;
}
