#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){

    int N,W;
    cin >> N >> W;

    //方針：まずは各時刻の配列を用意する
    //入力を受け取ったら、Timetable[S]は加算、Timetable[T]をPだけ減算する
    //累積和を取り、数字がWを超えたらNoを出力する


    vector<int>Time_table(200100,0);
    rep(i,N){
        int S, T , P;
        cin >> S >> T >> P;
        Time_table[S] += P;
        Time_table[T] -= P;
    }

    int now = 0;
    //累積和を取る
    vector<int>S(200100);
    rep(i,200000){
         now += Time_table[i];
         if(now > W){
             cout << "No" << endl;
             return 0;
         }
    }

    cout << "Yes" << endl;
    return 0;
    
}