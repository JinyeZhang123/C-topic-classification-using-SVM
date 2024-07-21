template <int char_size, int base>
struct Trie {
    struct Node {
        vector<int> next_node;
        vector<int> accept;
        vector<int> is_exist;
        int c;
        int common;
        Node(int _c) : c(_c), common(0) {
            next_node.assign(char_size, -1);
            is_exist.assign(26, 0);
        }