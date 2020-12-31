#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){
    int r,d,x;
    cin >> r >> d >> x;

    vector<int>A(10);

    A[0] = x;

    for(int i = 1; i <= 10; i++){
        A[i] = A[i-1] * r - d;
        cout << A[i] << endl;

    }

    return 0;

}