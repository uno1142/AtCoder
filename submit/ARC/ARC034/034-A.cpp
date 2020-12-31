#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;


int main(){
    int N;
    cin >> N;
    double max_score = 0;
    rep(i,N){
        double a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;

        double now = (a+b+c+d)+ (e*11 / 90); 
        max_score = max(now,max_score);

    }

    cout << fixed << setprecision(8) << max_score << endl;
    return 0;

}