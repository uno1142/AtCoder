#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;

    //first = x, second = y
    vector<pair<int,int>>A(N);

    rep(i,N){
        cin >> A[i].first >> A[i].second;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                //i,j,kの3点を選んだ
                int a,b,c,d;
                a = A[j].first - A[i].first;
                b = A[j].second - A[i].second;

                c = A[k].first - A[i].first;
                d = A[k].second - A[i].second;

                if(a * d == b * c){
                    cout << "Yes" << endl;
                    return 0;
                }




            }
        }
    }

    cout << "No" << endl;
    return 0;



}