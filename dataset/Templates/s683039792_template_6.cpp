template <int char_size, int base>
struct Trie {
  struct Node { // 頂点の構造体を定義
    vector<int> next;   // 子の頂点番号を格納。存在しなければ-1
                        // next[c] := 次の文字が c となる子頂点の頂点番号
    vector<int> accept; // 末端がこの頂点になる文字列の str_id を保存
                        // str_id := その文字列が何番目に入ったか(0-indexed)
    int c;              // base からの間隔をint型で表現したもの
    int common;         // いくつの文字列がこの頂点を共有しているか（根は全員が共有）
    Node(int c_) : c(c_), common(0) { // <- なぜ0で生成？ 1では？
      next.assign(char_size, -1); // 生成時は子がいないので、next[全文字種] = -1
    }