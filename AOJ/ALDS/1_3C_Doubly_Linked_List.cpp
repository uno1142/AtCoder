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



//リストの各要素。keyと2つのポインタで構成。
struct Node{
    int key;
    struct Node *prev, *next;
};


//番兵
Node *nil;


//リストの要素の探索。番兵の次の要素からたどっていく
Node* listSearch(int key){
    Node *cur = nil->next;
    while( cur != nil && cur->key != key){
        cur = cur->next;
    }
    //keyを発見するか番兵に戻ってしまった場合にポインタを返す
    return cur;
}

//番兵を使って空のリストを作成する。
void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList(){
    Node *cur = nil->next;
    int isf = 0;
    while(1){
        if(cur == nil)break;
        if(isf++ >0)printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}


void deleteNode(Node *t){
    //番兵のときは処理しない
    if(t == nil)return;

    t->prev->next = t->next;
    t->next->prev = t->prev;
    //不要になったメモリを解放
    free(t);
}

void deleteFirst(){
    deleteNode(nil->next);
}

void deleteLast(){
    deleteNode(nil->prev);
}

void deleteKey(int key){
    //検索したノードを削除
    deleteNode(listSearch(key));
}

//番兵を起点にポインタを繋ぎ変える
void insert(int key){
    // [nil] [x] [next]
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}


int main(){

    int N;
    scanf("%d",&N);

    int key;
    char command[15];

    init();

    for(int i = 0; i < N; i++){
        //cinだと間に合わない
        scanf("%s%d",command, &key);

        if(command[0] == 'i'){
            insert(key);
        }
        else if(command[0] == 'd' ){
            if(strlen(command) > 6){
                if(command[6] == 'F')deleteFirst();
                else if(command[6] == 'L')deleteLast();
            }
            else {
                deleteKey(key);
            }
        }
    }

    printList();
    return 0;


}