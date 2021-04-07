#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){

    //1の位が1以上で一番小さいものを最後に注文する
    vector<int>A(5);
    rep(i,5)cin >> A[i];
    int min_num = 9;
    int itr;
    rep(i,5){
        int a = A[i];
        while(a>= 10){
            a %= 10;
            if(a == 0)break;
            if(a < min_num){
                min_num = a;
                itr = i;

            }
        }

    }
    int x = A[4];
    A[4] = A[itr];
    A[itr] = x;

    int time = 0;

    rep(i,5){

        if(time % 10 != 0){
            //10の倍数じゃないなら
            while(time % 10 != 0){
                time++;
            }
        }
        time += A[i];


    }

    cout << time << endl;
    return 0;

}