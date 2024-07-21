template<typename Monoid>
    typename SegmentTree<Monoid>::value_t SegmentTree<Monoid>::queryImpl(int a,int b,int k,int l,int r){
        if(a<=l && r<=b) return dat[k];
        if(r<=a || b<=l) return Monoid::E();
        int mid=(l+r)/2;
        value_t c1v=queryImpl(a,b,k*2+1,l,mid);
        value_t c2v=queryImpl(a,b,k*2+2,mid,r);
        return Monoid::op(c1v,c2v);
    }