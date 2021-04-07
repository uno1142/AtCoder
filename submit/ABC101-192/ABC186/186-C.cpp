#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;


bool dont_have_seven (int x , int divisor){
    while(x != 0){
        if(x % divisor == 7)return false;
        x /= divisor;
    }
    return true;

}


int main(){
    int N;
    cin >> N;

    int ans = 0;

    for(int i = 1; i <= N; i++){
        if(dont_have_seven(i,10) && dont_have_seven(i,8))ans++;
    }

    cout << ans << endl;


}

//関数名わかりにくいからかえたほうがいいかも 