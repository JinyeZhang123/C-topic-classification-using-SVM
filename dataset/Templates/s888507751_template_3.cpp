template<typename T>
struct Binary_Indexed_Tree{
    vector<T> bit;
    const int n;
    
    Binary_Indexed_Tree(int n) : n(n){
        bit.assign(n+1, 0);
    }