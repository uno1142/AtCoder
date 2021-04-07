#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;



int main(){
    string S;
    cin >> S;
  	

    int digit = (int)S.size();

    int ans = digit;

    for(int bit =1; bit  < (1 << digit); bit ++){

        //このbitの組み合わせの時に生成する文字列

        ll sum = 0; 
        string x = "";
        for(int i = 0; i < digit; i++){
            if(bit & (1 << i) ){
              sum += S.at(i)- '0';
              x.push_back(S.at(i));
              
            }
        }

        //各桁の和が3の倍数ならその数字も3の倍数
        if( sum % 3 == 0){
            ans = min(ans, digit - (int)x.size());
        }




    }

    if(ans == digit) cout << -1 << endl;
    else cout << ans << endl;

    return 0;


}