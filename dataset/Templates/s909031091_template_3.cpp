template<typename T>
struct Binary_Indexed_Tree{
    vector<T> bit;
    
    Binary_Indexed_Tree(int N){
        bit.assign(N+1, 0);
    }