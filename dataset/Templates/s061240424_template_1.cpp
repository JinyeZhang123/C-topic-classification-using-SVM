template <class type> class SegmentTree{
public:
    int size;
    vector<type> tree;
    type def;
    type (*marge)(type, type);

    SegmentTree(int n, type d, type (*m)(type, type)){
        size = 1;
        def = d;
        marge = m;
        n++;

        while(size < n){
            size *= 2;
        }