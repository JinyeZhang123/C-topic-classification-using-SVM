template<typename C>
    int find_first(int a,const C &check){
        Monoid M=id0;
        return find_first(a,check,M,1,0,n);
    }