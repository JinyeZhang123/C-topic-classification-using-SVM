template<int char_size,int base>
struct Trie {
    struct Node {
        vector<int> child,accept;
        int c;
        int common;
        Node(int c):c(c),common(0) {
            child.assign(char_size,-1);
        }