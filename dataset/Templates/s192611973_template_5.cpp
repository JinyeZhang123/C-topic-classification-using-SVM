template<typename Monoid>
    typename SegmentTree<Monoid>::value_t SegmentTree<Monoid>::query(int a,int b){
        return queryImpl(a,b,0,0,N);
    }