#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){

    int S;
    cin >> S;

    int a = S / 100; //前半
    int b = S % 100;

    if(1 <= a && a <= 12){
        //MM??
        if(1 <= b && b <= 12){
            cout << "AMBIGUOUS" << endl;
        }
        else cout << "MMYY" << endl;
    }
    else{
        //YY??
        if(1 <= b && b <= 12)cout << "YYMM" << endl;
        else cout << "NA" << endl;
    }

    return 0;

}