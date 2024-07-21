template<int char_size,int margin>
class Trie{
private:
    struct Node{
        int ne[char_size];
        int num;
        vec<int> accept;
        Node():num(0){
            memset(ne,-1,sizeof(ne));
        }