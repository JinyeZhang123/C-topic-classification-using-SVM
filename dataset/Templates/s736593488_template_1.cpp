template <int char_size, int base> struct Trie {
    struct Node {
        vector<int> next; //子の頂点のインデックス
        int last;         // 終端する単語数
        int count;        // Nodeを共有する単語数
        Node() : count(0), last(0) { next.assign(char_size, -1); }