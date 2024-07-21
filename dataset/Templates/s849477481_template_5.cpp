template <int char_num, char base>
class Trie {
private:
    struct Node {
        std::array<int, char_num> children;
        std::vector<int> accept;
        std::array<int, char_num> count;
        int common = 0;
        int c;
        Node(int c) : c(c) {
            children.fill(-1);
            count.fill(0);
        }