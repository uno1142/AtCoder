#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;

    vector<int>X(N);
    vector<int>Y(N);

    rep(i,N){
        cin >> X[i] >> Y[i];
    }

    int ans =0;

    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){

            double a = Y[j] - Y[i];
            double b = X[j] - X[i];
            if(b == 0){
                continue;
            }

            if( a / b >= -1 && a/b <= 1)ans++;
        }

    }
    cout << ans << endl;
    return 0;


}