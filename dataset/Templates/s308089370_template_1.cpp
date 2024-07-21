template <int char_size, int base>
struct Trie {
    struct Node {            // 頂点を表す構造体
        vector<int> next;    // 子の頂点番号を格納。存在しなければ-1
        vector<int> accept;  // 末端がこの頂点になる単語の word_id を保存
		vector<int> wordid;  // この頂点を共有しているword_idの一覧
        int c;               // base からの間隔をint型で表現したもの
		int depth;			 // 何文字目か
        Node(int c_,int depth_) : c(c_), depth(depth_) {
            next.assign(char_size, -1);
        }