#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    string S;
    cin >> S;

    cout << fixed << setprecision(14);

    double sum = 0;

    rep(i,N){
        if(S.at(i) == 'A')sum+=4;
        if(S.at(i) == 'B')sum+=3;
        if(S.at(i) == 'C')sum+=2;
        if(S.at(i) == 'D')sum+=1;
        if(S.at(i) == 'F')sum+=0;
    }

    cout << sum / N << endl;
    return 0;





}