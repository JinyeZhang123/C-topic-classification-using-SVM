template<int char_size, int base>
class Trie {
public:
    explicit Trie() : res(0), node(1, Node()) {}