template<class F>
    int search_right(int l, F cond){
        if(l == n) return n;
        thrust(l += sz);
        T val = M::e();
        do {
            while(!(l&1)) l >>= 1;
            if(!cond(M::f(val, seg[l]))){
                while(l < sz) {
                    eval(l); l <<= 1;
                    if (cond(M::f(val, reflect(l)))){
                        val = M::f(val, reflect(l++));
                    }