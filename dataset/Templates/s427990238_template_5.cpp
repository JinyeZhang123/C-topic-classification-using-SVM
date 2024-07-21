template<int char_size, int base>
struct Trie {
  struct Node {
    vector<int> nex, accept;
    int c, common;
    //
    vi al;//
    Node(int c_) : c(c_), common(0) {
      nex.assign(char_size, -1);
      //
      al.assign(26, 0);//
    }