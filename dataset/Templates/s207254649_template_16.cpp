template<int char_size,int base>
struct Trie{
    struct Node {
        vector<int> next;  //子の頂点番号を格納。存在しなければ-1
        vector<int> accept; //末端がこの頂点になる文字列のstr_idを保存
        int c;  //文字数をint型で表現したもの
        int common;  //いくつの文字列がこの頂点を共有しているか
        Node(int c_): c(c_),common(0){
            next.assign(char_size, -1);

        }