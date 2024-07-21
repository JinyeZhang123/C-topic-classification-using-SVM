template<typename C>
    int find(int st,C &check,T &acc,int k,int l,int r){
        if(l+1==r){
            acc=f(acc,reflect(k));
            return check(acc)?k-n:-1;
    }