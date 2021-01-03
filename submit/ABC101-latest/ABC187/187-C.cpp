#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    //Aがびっくりつき
    set<string>A;
    set<string>B;

    rep(i,N){
        string S;
        cin >> S;
        if(S.at(0) == '!')A.insert(S);
        else B.insert(S);
    }

    for(auto x : B){
        if(A.count('!' + x) ){
            cout << x << endl;
            return 0;
        }
        

    }

    cout << "satisfiable" << endl;
    return 0;

}