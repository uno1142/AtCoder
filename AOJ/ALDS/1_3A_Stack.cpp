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

stack<int>st;

int solve (string str){
    int a,b;
    b = st.top();
    st.pop();
    a = st.top();
    st.pop();

    if(str == "+")return a + b;
    else if(str == "-")return a - b;
    else return a * b;

}


int main(){

    string S;

    while(cin >> S){
        if(S == "+" || S == "-" || S == "*"){
            st.push(solve(S));
        }
        else st.push(atoi(S.c_str()));

    }
  
  cout << st.top() << endl;
  return 0;









}