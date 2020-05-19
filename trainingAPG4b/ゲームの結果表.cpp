#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> board(N, vector<char>(N, '-')); //ここで-で埋めた縦Ｎ横Ｎの表を作っておく
  
  for(int i = 0; i < M; i++){
    A.at(i)--; B.at(i)--; //Nは1～Nの背番号なので、atで指定する配列の番号は-1しなければならない
    
    board.at(A.at(i)).at(B.at(i)) = 'o';
    board.at(B.at(i)).at(A.at(i)) = 'x';
  }
  for(int i = 0; i <N; i++){
    for(int j =0; j <N; j++){
      cout << board.at(i).at(j) ;
      if( j == N -1){
        cout << endl;
      }
      else{
        cout << " ";
      }
    }
  }
}
