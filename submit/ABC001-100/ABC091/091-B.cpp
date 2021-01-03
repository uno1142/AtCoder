#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    map<string,int>mpp;
    set<string>S;

    rep(i,N){
        string a;
        cin >> a;
        S.insert(a);

        mpp[a]++;
    }

    int M;
    cin >> M;
    rep(i,M){
        string b;
        cin >> b;
        S.insert(b);

        mpp[b]--;
    }

    int max_n = 0;
    int min_n = 10000;

    for(auto a:S){
        max_n = max(mpp[a],max_n);
    }
    
    cout << max_n << endl;
    return 0;


}