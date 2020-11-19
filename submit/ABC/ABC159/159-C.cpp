#include <bits/stdc++.h>
using namespace std;

int main(){
  //まず直方体の3辺を考える。a,b,L-(a+b)で表せる。
  double L;
  cin >> L;
  cout << fixed <<  setprecision(12) << L*L*L/27 << endl;
}
