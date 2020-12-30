#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];
     
     int cnt = 0;

     rep(i,N){
         if(A[i] != i+1)cnt++;
     }

     if(cnt <= 2)cout << "YES" << endl;
     else cout << "NO" << endl;
     return 0;



}