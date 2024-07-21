template<typename C>
    int find_last(int b,const C &check){
        Monoid R=id0;
        if (b>=n){
            if (check(f(reflect(1),R))) return find_subtree(1,check,R,true);
            return -1;
        }