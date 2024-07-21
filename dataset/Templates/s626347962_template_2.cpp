template<typename C>
    int find_subtree(int k,const C &check,Monoid &M,bool type){
        while(k<n){
            propagate(k);
            Monoid nxt=type?f(reflect(k<<1|type),M):f(M,reflect(k<<1|type));
            if (check(nxt)) k=k<<1|type;
            else M=nxt,k=k<<1|(type^1);
        }