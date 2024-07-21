template<typename Monoid>
    void SegmentTree<Monoid>::updateALL(std::vector<value_t> x){
        for(int i=0;i<x.size();i++) dat[N-1+i]=x[i];
        for(int i=N-2;i>=0;i--) dat[i]=Monoid::op(dat[i*2+1],dat[i*2+2]);
    }