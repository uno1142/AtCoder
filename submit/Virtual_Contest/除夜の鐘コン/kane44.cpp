#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<int>A(N);
    rep(i,N)cin >> A[i];

    //似ている数列は,各要素が-1,0,+1の3種類　つまり3^N個(全く同じ数列を含む)ある。
    //さらに、すべてが奇数の場合をひけばよい。
    //よって、すべて奇数になる場合を数え上げる
    ll cnt = 1;

    rep(i,N){
        if(A[i] % 2 == 0){
            //偶数なら、奇数になるのは２通り
            cnt *= 2;
        }
        //奇数ならそれ以外にない
    }

    //すべて奇数は2^cnt個

    cout << pow(3,N) - cnt << endl;
    return 0;







}