template<typename Monoid>
    void SegmentTree<Monoid>::update(int pos,value_t val){
        pos+=N-1;
        dat[pos]=val;
        while(pos!=0){
            int par=(pos-1)/2;
            dat[par]=Monoid::op(dat[par*2+1],dat[par*2+2]);
            pos=par;
        }