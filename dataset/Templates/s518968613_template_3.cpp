template<int char_size, char base>
struct Trie{
    struct Node{
        vector<int> next, accept;
        vector<ll> cnt;
        ll count; //子以下に追加された文字列の数

        Node() : count(0){
            next.assign(char_size, -1);
            cnt.assign(char_size, 0);
        }