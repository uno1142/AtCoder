#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main(){

    string A,B;
    cin >> A >> B;

    string A2 = A;
    string B2 = B;

    rep(i,0,3){
        if(A2[i] != '9'){
            A2[i] = '9';
            break;
        }
    }

    if(B2[0] == '1'){
        rep(i,1,3){
            if(B2[i] != '0'){
                B2[i] = '0';
                break;
            }
        }
    }
    else B2[0] = '1';


    int a = stoi(A);
    int b = stoi(B);
    int a2 = stoi(A2);
    int b2 = stoi(B2);

    cout << max(a - b2, max(a2-b , a-b)) << endl;
    return 0;
}