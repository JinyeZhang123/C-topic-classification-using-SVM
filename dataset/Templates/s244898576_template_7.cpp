template<int sz>
struct Trie{
    struct Node{
        int nxt[sz],ex;// 自分以下で受理する文字の数
        vector<int> accept;// このノードが受理するstring ID
        Node():ex(0){memset(nxt,-1,sizeof(nxt));}