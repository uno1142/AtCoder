#include<bits/stdc++.h>
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define INF ((1LL<<62)-(1LL<<31)) /*オーバーフローしない程度に大きい数*/
#define MOD 1000000007
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int,int>;
const double PI = 3.14159265358979323846;

int main(){
    int N;
    cin >> N;
    vector<int>V(N);
    rep(i,0,N)cin >> V[i];

    //偶数のmap,奇数のmapを用意して、配列内の偶数/奇数番目にそれぞれ何個同じ数字があるか記憶する

    map<int,int>even;
    map<int,int>odd;

    rep(i,0,N){
        if(i % 2 == 0){
            even[V[i]]++;
        }
        else odd[V[i]]++;
    }

    int even_num = N / 2;
    int odd_num = N/2;

    //mapの中身を見ていって、evenの最大値を見つける。
    //より大きい値を見つけたら、その数字が何なのかも記憶する。

    int max_even = 0;
    ll max_index = INF;
    for(auto x : even){
        if(max_even < x.second)max_index = x.first;
        max_even = max(max_even, x.second);
    }

    //oddで先ほど記憶した数字が出てきたときは無視する。(oddとevenが同じ数字は不可)
    int max_odd = 0;
    for(auto x : odd){
        if(x.first == max_index)continue;
        max_odd = max(max_odd, x.second);
    }
    
    
    int max_odd2 = 0;
    ll max_index2 = INF;
    for(auto x : odd){
        if(max_odd2 < x.second)max_index2 = x.first;
        max_odd2 = max(max_odd2, x.second);
    }
    int max_even2 = 0;
    for(auto x : even){
        if(x.first == max_index2)continue;
        max_even2 = max(max_even2, x.second);
    }



    int ans = (even_num - max_even) + (odd_num - max_odd);
    int ans2 = (even_num - max_even2) + (odd_num - max_odd2);

    cout << min(ans,ans2) << endl;

}