template<typename C>
    int find_last(int b,const C &check,Monoid &M,int k,int l,int r){
        if (l+1==r){
            M=f(reflect(k),M);
            return check(M)?k-n:-1;
        }