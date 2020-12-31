#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    string S;
    cin >> N >> S;

    const ll num = 10000000000;

    string S;
    cin >> S;

    if(S == "1"){
        cout << num * 2 << endl;
        return 0;
    }
    else if(S == "11" || S == "0" || S == "110"){
        cout << num << endl;
        return 0;
    } 

    int r = 1;
    int pos = 0;

    //左端のはみ出てる部分をチェックしてスタート位置に　この3パターンでなければ0

    if(S.substr(0,1) == "0")pos = 1;
    else if(S.substr(0,1) == "10")pos = 2;
    else if(S.substr(0,2) == "110")pos = 3;
    else {
        cout << 0 << endl;
        return 0;
    }

    while( pos < N){

        if(pos + 3 <= N && S.substr(pos,3) == "110"){
            r++;
            pos += 3;
        }

        else if(pos ==2 && S.substr(pos,2) == "11"){
            r++;
            break;
        }
        
        else if(pos == 1 && S.substr(pos,1) == "1"){
            r++;
            break;
        }
        //ここまでに当てはまらなければ文字列は含まれない
        else {
            cout << 0 << endl;
            return 0;
        }

    }

    cout << num - r + 1 << endl;
    return 0;




}