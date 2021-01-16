#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const double PI = 3.14159265358979323846;

int main(){
    int N , K ;
    cin >> N >> K;

    vector<int>A(300010,0);

    rep(i,0,N){
        int a;
        cin >> a;
        A[a]++;
    }

    //0がなければ、得点にならない。xが0になったら得点計算を終了する

    int x = A[0];
    
    ll ans = 0;


    rep(i,0,300010){
        if(A[i] >= x)continue;
        else {

        //0だったとき、清算しておわり
          
          if(A[i] == 0){
              if(K > x)ans += x * i;
              else ans += K * i;
              cout << ans << endl;
              return 0;
          }

          //0じゃないときは、XをA[i]にして差分を加算。
          //ただし、差分を加算したことによってKの値がA[i]をより小さくなってはいけない

          //等しいか小さいときは、これをしてもいい
          if(K > A[i]){
              //減算可能回数now
              int now = x - A[i];
              x = A[i];
              while(K > A[i] && now > 0){
                  ans += i;
                  K--;
                  now--;
              }
              //この時点でK == A[i];

          }
          else x = A[i];
          
        }



    }
  
  cout << ans << endl;



}