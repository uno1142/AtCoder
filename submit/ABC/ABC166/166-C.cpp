#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int H[100000];
  
  for(int i=0; i<N; i++){
    cin >> H[i];
  }
  bool good[100000];//道がつながっていないときもいい展望台なのでtrueで埋める
  for(int i =0; i < N; i++){
    good[i] = true;
  }
  
  for(int i =0; i < M; i++){//道の数ぶん入力するのでM
    int a, b;
    cin >> a >> b;
    a--; b--;
    if(H[a] <= H[b]) good[a] =false; //aはいい展望台ではない。bool配列の対応する要素をfalseに。
    if(H[b] <= H[a]) good[b] =false;
  }
  int ans =0;
  for(int i =0; i < N; i++){//展望台をみていくのでN
    if(good[i]){
      ans++;
    }
  }
  cout << ans << endl;
}