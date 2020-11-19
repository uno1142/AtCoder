#include<bits/stdc++.h>
using namespace std;

int main(){
  int K , N;
  cin >> K >> N;
  vector<int> A(N); //いえの距離の配列
  for(int i =0; i < N; i++){
    cin >> A[i];
  }
  sort(A.begin(),A.end()); //昇順にソート
  //一番距離が離れている2点間を見つける
  int maxd = 0; //2点間の最長距離
  int max_id = 0;//一番距離が長いところ
  for(int i = 1; i <N; i++){
    int maxi = A[i] - A[i -1];
    if(maxi > maxd) max_id = i;
    maxd = max(maxd, maxi);
  }
  //これで，一番離れている2点間はA[max_id]とA[max_id - 1]に決まった
  //例外として,A[0]とA[N-1]間の距離がある。これはK - A[N-1] + A[0]である
  if(K - A[N-1] + A[0] > maxd){ //もしその距離が他の全ての区間の最大距離より大きければ
    cout << A[N-1] - A[0] << endl; //これだけでいい
  }
  else{ //それ以外なら
    cout << K - A[max_id] + A[max_id - 1] << endl;
  }
}
