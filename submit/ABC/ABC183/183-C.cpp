#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;


 int main(){
     int N , K;
     cin >> N >> K;

     vector<vector<int>>T(N,vector<int>(N));

     rep(i,N){
         rep(j,N){
             cin >> T[i][j];
         }
     }

     //ここまで入力おわり

     vector<int>index;
     rep(i,N){
         index.push_back(i);
     }

     int ans = 0;

     do{
         int time = 0;
         rep(i,N){
             time += T[index[i]][index[(i+1)%N]];
             if(time == K)ans++;
         }
     }while(next_permutation(index.begin()+1,index.end()));
     cout << ans << endl;
     return 0;
 }