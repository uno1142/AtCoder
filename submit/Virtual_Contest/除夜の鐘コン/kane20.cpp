#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    string ans = "";
    ans .push_back('1');

    for(int i = 1; i < N; i++)ans.push_back('0');
    ans.push_back('7');
    cout << ans << endl;
    return 0;



    
}