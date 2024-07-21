template<typename C>
    int find_last(int b,const C &check){
        Monoid M=id0;
        return find_last(b,check,M,1,0,n);
    }