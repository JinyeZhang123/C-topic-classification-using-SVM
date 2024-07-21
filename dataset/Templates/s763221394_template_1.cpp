template <typename T>
struct segment_tree{

    vector<T>tree;
    int size;
    T DEF;
    void init(int n){
        size=1;
        DEF=INF;
        while(size<n)size*=2;
        tree=vector<T>(2*size,0);
    }