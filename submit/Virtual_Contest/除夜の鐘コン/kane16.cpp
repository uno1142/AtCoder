#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    string A, B , C;
    cin >> A >> B >> C;

    int count = 0;
    rep(i,N){
        if(A[i] == B[i] && B[i] == C[i])continue;
        else if(A[i] == B[i] || B[i] == C[i] || A[i] == C[i]) count++;
        else count += 2;


    }
    cout << count << endl;
    return 0;






}