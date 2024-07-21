template <int char_size, int margin>
struct trie_tree {
  using Node = trie_node<char_size>;

  vector<Node> nodes;
  int root;

  trie_tree() : root(0) {
    nodes.push_back(Node());
  }