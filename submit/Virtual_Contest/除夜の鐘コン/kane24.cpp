#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<int>P(N);

    rep(i,N){
        cin >> P[i];
    }
  
  	int max_n = 0;
  
    set<int>S;

    rep(i,N){
      	S.insert(P[i]);

        for(int j = max_n; j <= N; j++){
            if(!S.count(j)){
              	max_n = j;
                cout << j << endl;
                break;
            }

        }

    }

}