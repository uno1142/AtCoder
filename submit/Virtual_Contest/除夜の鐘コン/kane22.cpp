#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    vector<int>A(3);
    rep(i,3)cin >> A[i];

    sort(A.begin(),A.end());

    int cnt = 0;

    //小さいふたつの偶数奇数が異なるとき,偶奇を揃える

    if(A[0] % 2 != A[1] %2){
        A[0]++,A[2]++,cnt++;
    }

    //この操作で小さいふたつはいっしょ
    while(A[0] < A[1]){
        A[0] += 2;
        cnt++;
    }

    //小さいふたつを+1/+1しておしあげる
    cnt += A[2] - A[1];

    cout << cnt << endl;
    return 0;








}