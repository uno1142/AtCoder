#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    ll N;
    cin >> N;
    vector<ll>A(N); //aoki
    vector<ll>B(N); //takahasi

    //この差は、高橋君が得をする票数
    //taka > aokiになればいい

    vector<ll>diff(N);

    ll aoki = 0;
    ll taka = 0;

    rep(i,N){
        cin >> A[i] >> B[i];
        aoki += A[i];
        diff[i]= A[i] * 2 + B[i];
    }

    sort(diff.begin(),diff.end());
    reverse(diff.begin(),diff.end());
    //一番得点差が縮まる場所を降順に

    ll ans = 0;

    rep(i,N){
        taka += diff[i];
        ans++;
        if(taka > aoki){
            cout << ans << endl;
            return 0;
        }
    }

    cout << -1 << endl;



}