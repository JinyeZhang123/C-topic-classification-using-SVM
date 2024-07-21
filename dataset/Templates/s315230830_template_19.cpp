template <int char_size>
struct trie_node {
  int nxt[char_size];

  int exist;
  vector<int> accept;

  trie_node() : exist(0) {
    memset(nxt, -1, sizeof(nxt));
  }