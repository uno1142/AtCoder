#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
  if(a % b == 0)return b;
  else return gcd(b,a % b);
}

int main(){
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    int bunshi = a * d  + b * c;
    int bunbo = a * c;
  
    bool notdivisible = false;

    while(true){
      int r = gcd(bunshi,bunbo);
      if(r == 1)break;
      else{
        bunshi /= r;
        bunbo /= r;
      }
    }

    cout << "分数1の分母 : " << a << endl;
    cout << "分数1の分子 : " << b << endl;
    cout << "分数2の分子 : " << c << endl;
    cout << "分数2の分母 : " << d << endl;

    cout << b << '/' << a << " + " << d << '/' << c << " = " << bunshi << '/' << bunbo;
    return 0;


  
}