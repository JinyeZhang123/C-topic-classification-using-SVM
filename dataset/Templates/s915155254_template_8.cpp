template <int K, class T>
struct Trie
{
  struct Node
  {
    int c;
    std::array<int, K> nxt;
    std::array<int, K> cnt; // 文字cを含むような子孫の数
    int sz;                 // 部分木のサイズ

    explicit Node(int c) : c(c), sz(0)
    {
      nxt.fill(-1);
      cnt.fill(0);
    }