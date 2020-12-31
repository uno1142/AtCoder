#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){

    int A,B;
    cin >> A >> B;

    if(abs(A) == abs(B))cout << "Draw" << endl;
    else if(abs(A) > abs(B))cout << "Bug" << endl;
    else cout << "Ant" << endl;
    return 0;
 

}