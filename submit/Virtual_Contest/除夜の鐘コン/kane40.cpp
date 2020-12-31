#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    ll N;
    cin >> N;

    vector<int>A = {1,2,3,4,5,6};

    //操作を5*6回行うともとに戻る

    int x = N % 30;
    for(int i = 0; i < x; i++){
        swap(A[i%5],A[i%5 + 1]);

    }

    rep(i,5)cout << A[i];
    cout << endl;
    return 0;



}