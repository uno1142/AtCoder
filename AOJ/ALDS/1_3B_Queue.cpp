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

    int N,Q,time,cnt_time = 0;

    string name;

    queue<pair<string,int>>que;

    cin >> N >> Q;

    rep(i,0,N){
        cin >> name >> time;
        que.push(make_pair(name,time));
    }

    while(!que.empty()){
        auto top = que.front();
        que.pop();
        if(top.second <= Q){
            cnt_time += top.second;
            cout << top.first << " "<< cnt_time << endl;
        }
        else{
            cnt_time += Q;
            que.push(make_pair(top.first,top.second - Q));
        }

    }



}