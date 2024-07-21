template<typename C>
    int find_first(int a,const C &check,Monoid &M,int k,int l,int r){
        if (l+1==r){
            M=f(M,reflect(k));
            return check(M)?k-n:-1;
        }