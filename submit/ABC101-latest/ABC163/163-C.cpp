#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>ans(N);
  
  for(int i=0; i<N-1; i++){
    int x;
    cin >> x;
    ans[x-1]++;
  }
  for(int x :ans){
    cout << x << endl;
  }
}