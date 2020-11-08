#include <bits/stdc++.h>
using namespace std;

int main(){
  int N , K;
  cin >> N >> K;
  int d;
  
  
  int x; //x(x <N)番目の人がお菓子をもらう
  
  set<int> S; //お菓子を持っている人の番号を入れるset
  for(int i = 1; i<= K; i++){ //K種類のお菓子の
    cin >> d;
    for(int j = 1; j <= d; j++){ //i種目のお菓子を持っている人
      cin >> x;
      S.insert(x);
    }
  }
  
  int y = S.size(); //お菓子を1つ以上持っている人数
  
  cout << N - y<< endl;
}
  