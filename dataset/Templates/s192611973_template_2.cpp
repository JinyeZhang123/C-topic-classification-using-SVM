template<typename Monoid>
    SegmentTree<Monoid>::SegmentTree(int n):N(calcN(n)),dat(2*N-1,Monoid::E()){}