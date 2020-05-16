 //わからなかった問題の解説をひとつずつかみ砕いた
 
 int main(void) {
 int h, w;
 cin >> h >> w;

 string board[50];

 for (int i = 0; i < h; ++i) cin >> board[i];

 const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
 const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1}; //それぞれもとになるマスから上下左右斜めに1マスずれた座標

 for (int i = 0; i < h; ++i) { // i回繰り返す（縦軸）
 for (int j = 0; j < w; ++j) { // w回繰り返す（横軸）
 if (board[i][j] == ’#’) continue; //i個目の縦軸の横軸j個目なのでマス目になる！！ここがわかってなかった

 int num = 0;
 for (int d = 0; d < 8; ++ d) {
 const int ni = i + dy[d];
 const int nj = j + dx[d];  // (ni,nj)マスは、現在のマスから8方向に移動した先の座標

 if (ni < 0 or h <= ni) continue;
 if (nj < 0 or w <= nj) continue; //(ni,nj)マスが表の範囲内にいなければ弾く
 if (board[ni][nj] == ’#’) num++;  //移動した先の座標に爆弾があったとき、カウント変数を+1する！！！！
 }

 board[i][j] = char(num + ’0’);  //それを文字として出力するのでchar

}
 }

 for (int i = 0; i < h; ++i) cout << board[i] << endl; //書き換えられた配列boardを書きだす。
 return 0;
 }
